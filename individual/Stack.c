#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_stack
{
    int data;
    struct list_stack *next;
} t_stack;

void push(t_stack** list, char n)
{
    t_stack *new = malloc(sizeof(t_stack));
    
    if (!list || (new = malloc(sizeof(t_stack))) == NULL)
        return ;

    new->data = n;
    new->next = *list;
    *list = new;
}

void pop(t_stack** list)
{
    t_stack *copy_head;

    if (!list || !*list)
        return ;
    
    copy_head = *list;
    *list = (*list)->next;
    free(copy_head);
}

void push_back(long n, t_stack** stack, int k)
{
    t_stack *copy = *stack;
    for (int i = 1; i < k; i++)
    {
        *stack = (*stack)->next;
    }
    t_stack *new = malloc(sizeof(t_stack));
    new->data = n;
    new->next = NULL;
    (*stack)->next = new;
    *stack = copy;
}

int main()
{   
    t_stack *head = malloc(sizeof(t_stack));
    head->data = 1;
    t_stack *head1 = malloc(sizeof(t_stack));
    head1->data = 2;
    t_stack *head2 = malloc(sizeof(t_stack));
    head2->data = 3;
    head->next = head1;
    head1->next = head2;
    head2->next = NULL;
    return 0;
}