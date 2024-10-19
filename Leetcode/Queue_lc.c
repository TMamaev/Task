#include <stdlib.h>
#include <stdio.h>

typedef struct s_queue
{
    int data;
    struct s_queue *next;
} t_queue;

void enqueue(t_queue** head, int n)
{
    t_queue *copy = *head;
    t_queue *new = malloc(sizeof(t_queue));
    new->data = n;
    new->next = NULL;
    while ((*head)->next != NULL)
    {
        *head = (*head)->next;
    }
    (*head)->next = new;
    *head = copy;
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
        dequeue(&queue);
        enqueue(&queue, tickets[i]);
        if (i == k)
            k--;
        t++;
        if (i == ticketsSize)
            i = 0;
    }
    return t;
}

// https://leetcode.com/problems/first-unique-character-in-a-string/
int firstUniqChar(char* s) {
    int ans;
    int check = 0;
    int n = 0;

    for (int i = 0; strcmp(&s[i], "\0") != 0; i++)
        n++;
    
    int save[n];
    for (int i = 0; i < n; i++)
        save[i] = 0;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if (strcmp(&s[i], &s[k]) == 0)
            {
                save[i]++;
            }
        }
    }
    for (int i = 0; i < n && check != 1; i++)
    {
        if (save[i] == 1)
        {

            check = 1;
            ans = i;
        }
    }
    if (check)
        return ans;
    else return -1;
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