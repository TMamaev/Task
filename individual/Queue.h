#ifndef QUEUE_H  
#define QUEUE_H 

typedef struct s_queue
{
    void* data;
    struct s_queue *next;
} t_queue;
void enqueue(t_queue** head, void* n);
void dequeue(t_queue** head, void (*func)(void* data));

#include <stdlib.h>
#include <stdio.h>

#endif