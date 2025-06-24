#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_stack
{
    void *data;
    struct s_stack *next;
} t_stack;

void push(t_stack** stack, void* data)
{
    t_stack *new = malloc(sizeof(t_stack));
    
    if (!stack || (new = malloc(sizeof(t_stack))) == NULL)
        return ;

    new->data = data;
    new->next = *stack;
    *stack = new;
}

void pop(t_stack** stack)
{
    t_stack *copy_head;

    if (!stack || !*stack)
        return ;
    
    copy_head = *stack;
    *stack = (*stack)->next;
    free(copy_head);
}

void *top(t_stack** stack)
{
    if (!stack || !*stack)
        return ;
    return (*stack)->data;
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
