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
    if (!stack)
        return ;
    t_stack *new = malloc(sizeof(t_stack));
    if (!new)
        return ;

    new->data = data;
    new->next = *stack;
    *stack = new;
}

void pop(t_stack** stack, void (*func)(void* data))
{
    t_stack *copy_head;

    if (!stack || !*stack)
        return ;
    
    if (func != NULL)
        func((*stack)->data);

    copy_head = *stack;
    *stack = (*stack)->next;
    free(copy_head);
}

t_stack *top(t_stack** stack)
{
    if (!stack || !*stack)
        return NULL;
    return *stack;
}

void push_back(long n, t_stack** stack, int k)
{
    if (!stack || !(*stack))
        return ;
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
