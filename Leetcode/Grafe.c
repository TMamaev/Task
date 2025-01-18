#include <stdlib.h>
#include <stdio.h>

typedef struct s_queue
{
    int x;
    int y;
    int move;
    struct s_queue *next;
} t_queue;

void enqueue(t_queue** head, int x, int y, int move)
{
    t_queue *new = malloc(sizeof(t_queue));
    new->x = x;
    new->y = y;
    new->move = move;
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

t_queue* top(t_queue* head)
{
    if (head == NULL)
        return NULL;
    while (head->next != NULL)
    {
        head = head->next;
    }
    return head;
}

void add_cell(char** maze, int rows, int cols,
                  t_queue** q, int x, int y, int move)
{
    if (x < cols && x >= 0 && y < rows && y >= 0 && maze[y][x] == '.')
    {
        enqueue(q, x, y, move);
        maze[y][x] = '*';
    }
}

int nearestExit(char** maze, int mazeSize, int* mazeColSize,
                int* entrance, int entranceSize) {
    int x = entrance[1];
    int y = entrance[0];
    int cols = *mazeColSize;
    int rows = mazeSize;
    t_queue *q;

    maze[y][x] = '*';
    add_cell(maze, rows, cols, &q, x + 1, y, 1);
    add_cell(maze, rows, cols, &q, x - 1, y, 1);
    add_cell(maze, rows, cols, &q, x, y + 1, 1);
    add_cell(maze, rows, cols, &q, x, y - 1, 1);

    while (q)
    {
        t_queue *q_top = top(q);
        x = q_top->x;
        y = q_top->y;
        if (q_top->y == 0 || q_top->x == 0 ||
            q_top->y == rows - 1 || q_top->x == cols - 1)
            return q_top->move;

        add_cell(maze, rows, cols, &q, x + 1, y, q_top->move + 1);
        add_cell(maze, rows, cols, &q, x - 1, y, q_top->move + 1);
        add_cell(maze, rows, cols, &q, x, y + 1, q_top->move + 1);
        add_cell(maze, rows, cols, &q, x, y - 1, q_top->move + 1);
        dequeue(&q);
    }
    return -1;
}
// 776 54321 ->
// [+!+++++]
// [+1+...+]
// [+2+6+.+]
// [+34567+]
// [++++7+.]