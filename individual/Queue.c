#include <Queue.h>

void enqueue(t_queue** head, void* n)
{
    t_queue *new = malloc(sizeof(t_queue));
    new->data = n;
    new->next = *head;
    *head = new;
}

void dequeue(t_queue** head, void (*func)(void* data))
{
    t_queue *copy = *head;
    t_queue *copy_next = NULL;

    while ((*head)->next != NULL)
    {
        copy_next = *head;
        *head = (*head)->next;
    }
    t_queue *copy_del = *head;
    func((*head)->data);
    free(copy_del);
    *head = copy_next;
    (*head)->next = NULL;
    *head = copy;
}

int main()
{
}
