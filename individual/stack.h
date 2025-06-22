#ifndef STACK_H  
#define STACK_H 

typedef struct list_stack
{
    int data;
    struct list_stack *next;
} t_stack;
void push(t_stack** list, char n);
void pop(t_stack** list);
void push_back(long n, t_stack** stack, int k);
#endif