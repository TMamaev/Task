#include <stdlib.h>
#include <stdio.h>

typedef struct s_queue
{
    int data;
    struct s_queue *next;
} t_queue;

void enqueue(t_queue** head, int n)
{
    t_queue *new = malloc(sizeof(t_queue));
    new->data = n;
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

int main()
{
    t_queue *head = malloc(sizeof(t_queue));
    head->data = 1;
    t_queue *head2 = malloc(sizeof(t_queue));
    head2->data = 3;
    head2->next = NULL;
    head->next = head2;
    enqueue(&head, 2);
    dequeue(&head);
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }

    return 0;
}
