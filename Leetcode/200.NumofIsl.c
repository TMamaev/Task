#include <stdio.h>

typedef struct s_queue
{
    int j;
    int i;
    struct s_queue *next;
} t_queue;

void enqueue(t_queue** head, int j, int i)
{
    t_queue *new = malloc(sizeof(t_queue));
    new->j = j;
    new->i = i;
    new->next = *head;
    *head = new;
}

void dequeue(t_queue** head)
{
    t_queue *walker = NULL;
    t_queue *copy_del = NULL;
    t_queue *prelast_item = NULL;

    if (!head || !*head)
        return ;
    walker = *head;
    while (walker->next != NULL)
    {
        prelast_item = walker;
        walker = walker->next;
    }
    if (prelast_item)
    {
        copy_del = prelast_item->next;
        prelast_item->next = NULL;
    }
    else
    {
        copy_del = *head;
        *head = NULL;
    }
    free(copy_del);
}

t_queue* q_top(t_queue* head)
{
    if (head == NULL)
        return NULL;
    while (head->next != NULL)
    {
        head = head->next;
    }
    return head;
}

// * * * 1 1 0 1 1 1 1
// * 0 1 0 1 1 1 1 1 1
// 0 1 1 1 0 1 1 1 1 1
// 1 1 0 1 1 0 0 0 0 1
// 1 0 2 0 1 0 0 1 0 1
// 1 0 0 1 1 1 0 1 0 0
// 0 0 1 0 0 1 1 1 1 0
// 1 0 1 1 1 0 0 1 1 1
// 1 1 1 1 1 1 1 1 0 1
// 1 0 1 1 1 1 1 1 1 0

//  TOP
// [i,j]
// [0,2]

void walkIsland(char** grid, int rows, int cols, int i, int j)
{
    t_queue *q;

    enqueue(&q, j, i);
    while (q)
    {
        t_queue *top = q_top(q);
        
        if (top->j + 1 < cols && grid[top->i][top->j + 1] == '1')
        {
            enqueue(&q, top->j + 1, top->i);
            grid[top->i][top->j + 1] = '*';
        }
        if (top->i + 1 < rows && grid[top->i + 1][top->j] == '1')
        {
            enqueue(&q, top->j, top->i + 1);
            grid[top->i + 1][top->j] = '*';
        }
        if (top->j - 1 >= 0 && grid[top->i][top->j - 1] == '1')
        {
            enqueue(&q, top->j - 1, top->i);
            grid[top->i][top->j - 1] = '*';
        }
        if (top->i - 1 >= 0 && grid[top->i - 1][top->j] == '1')
        {
            enqueue(&q, top->j, top->i - 1);
            grid[top->i - 1][top->j] = '*';
        }
        dequeue(&q);
    }
}

void print_matrix(char **grid, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
            printf("%c ", grid[i][j]);
        printf("\n");
    }
}

int numIslands(char** grid, int gridSize, int* gridColSize) {
    int cols = *gridColSize;
    int rows = gridSize; 
    int islands_count = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (grid[i][j] == '1')
            {
                grid[i][j] = '*';
                islands_count++;
                walkIsland(grid, rows, cols, i, j);
                print_matrix(grid, rows, cols);
                printf("AFTER %i island walk\n\n", islands_count);
            }
        }
    }
    return islands_count;
}
