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
    t_queue *copy = *head;
    t_queue *copy_next = NULL;

    while ((*head)->next != NULL)
    {
        copy_next = *head;
        *head = (*head)->next;
    }
    t_queue *copy_del = *head;
    free(copy_del);
    *head = copy_next;
    (*head)->next = NULL;
    *head = copy;
}

int nearestExit(char** maze, int mazeSize, int* mazeColSize,
                int* entrance, int entranceSize) {
     int x = entrance[1];
    int y = entrance[0];
    t_queue *head;
    t_queue *copy;
    enqueue(&head, x, y, 0);
    while (head->y != 0 && head->x != 0 && head->y !=mazeSize && head->x != *mazeColSize)
    {
        x = head->x;
        y = head->y;
        copy = head;
        while (head->next != NULL)
        {
            head = head->next;
        }
        x = head->x;
        y = head->y;
        if (*(maze+(*mazeColSize * y + x + 2)) == ".")
        {
            enqueue(&head, x + 1, y, head->move + 1);
        }
        if (*(maze+(*mazeColSize * y + x)) == ".")
        {
            enqueue(&head, x - 1, y, head->move + 1);
        }
        if (*(maze+(*mazeColSize * (y + 1) + x + 1)) == ".")
        {
            enqueue(&head, x, y + 1, head->move + 1);
        }
        if (*(maze+(*mazeColSize * (y - 1) + x + 1)) == ".")
        {
            enqueue(&head, x, y - 1, head->move + 1);
        }
        dequeue(&head);
        head = copy;
    }
    int min  = 9999999;
    while (head != NULL)
    {
        if (head->move < min) 
            min = head->move;
        head = head->next;
    }
    return min;
}
