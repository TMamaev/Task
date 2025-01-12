#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct s_queue
{
    int data;
    struct s_queue *next;
} t_queue;

void enqueue(t_queue** head, int n)
{
    
    t_queue *new = malloc(sizeof(t_queue));
    new->data = n;
    new->next = NULL;
    if ((*head) != NULL)
    {
        t_queue *copy = *head;
        while ((*head)->next != NULL)
        {
            *head = (*head)->next;
        }
        (*head)->next = new;
        *head = copy;
    }
    else
        *head = new;
}

void dequeue(t_queue** head)
{
    t_queue *copy = *head;
    (*head) = (*head)->next;
    free(copy);
}

// https://leetcode.com/problems/time-needed-to-buy-tickets/
int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {
    int t = 0;
    t_queue *queue = NULL;
    
    for (int i = 0; i < ticketsSize; i++)
    {
        enqueue(&queue, tickets[i]);
    }
    for (int i = 0; tickets[k] != 0; i++)
    {
        tickets[i]--;
        if (queue->data != 0)
        {
            enqueue(&queue, tickets[i]);
            t++;
        }
        dequeue(&queue);
        
        
        if (i == ticketsSize - 1)
            i = 0;
    }
    return t;
}

// "level"
// l == l l != e l != v l != e l == l
// e != l e == e e != v e == e e != l
// v != l v != e v == v v != e v != l
// !!!!!
// l == l l != e l != v l != e l == l
// e != l e == e e != v e == e e != l
// 2 2 1 2 2
int *size(char *s, int *sizeArray)
{
    *sizeArray = 127;
    int *size = malloc(*sizeArray * sizeof(int));
    bzero(size, *sizeArray * sizeof(int));
    
    for (int i = 0; i < strlen(s); i++)
    {
        size[s[i]]++;
    }
    return size;
}

// "level"   size 'e' = ?
// 

// https://leetcode.com/problems/first-unique-character-in-a-string/
int firstUniqChar(char* s) {
    int ans = -1;
    int n = strlen(s);
    int sizearray = 127;
    
    int *size = malloc(sizearray * sizeof(int));
    bzero(size, sizearray * sizeof(int));
    
    for (int i = 0; i < strlen(s); i++)
    {
        size[s[i]]++;
    }
    for (int i = 0; i < n && ans == -1; i++)
    {
        if (size[s[i]] == 1)
        {
            ans = i; 
        }
    }
    return ans;
}

int main()
{
    const char *s = "lleett";
    // int tickets[4] = {5, 1, 1, 1};
    // enqueue(&head, 2);
    // dequeue(&head);
    int pos = firstUniqChar(s);
    printf("%d", pos);
    return 0;
}