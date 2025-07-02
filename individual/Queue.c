#include <Queue.h>

void enqueue(t_queue** head, void* data)
{
    t_queue *new;
    if (!head)
        return ;
    new = malloc(sizeof(t_queue));
    if (!new)
        return ;

    new->data = data;
    new->next = *head;
    *head = new;
}

void dequeue(t_queue** head, void (*func)(void* data))
{
    
    t_queue *copy = NULL;
    t_queue *copy_next = NULL;
    
    if (!head || !(*head) || !func)
        return ;
    copy = *head;
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
