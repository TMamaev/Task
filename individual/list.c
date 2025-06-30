#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <list.h>

typedef struct list_item
{
    void* data;
    struct list_item *next;
} t_list;

int lst_length(struct list_item *head)
{
    int length = 0;
    
    while (head != NULL)
    {
        length++;
        head = head->next; 
    }
    return length;
}

t_list *lst_last(t_list *head)
{
    if (head == NULL)
        return NULL;
    while (head->next != NULL)
    {           
        head = head->next;
    }
    return head;
}

void ft_lstadd_front(t_list **head, void* data)
{
    t_list *new = malloc(sizeof(t_list));
    new->data = data;
    if (!head || !new)
        return ;
    new->next = *head;
    *head = new;
}

void ft_lstclear(t_list **lst, void (*func)(void *))
{
    while((*lst)->next != NULL)
    {
        func((*lst)->data);
        t_list *copy_head = (*lst);
        free(copy_head);
        *lst = (*lst)->next;
    }
}

void ft_lstadd_back(t_list **lst, void* data)
{
    t_list *new = malloc(sizeof(t_list));
    new->data = data;
    if (!new)
        return ;
    if (*lst == NULL)
    {
        (*lst)->next = new;
        return ;
    }
    while ((*lst)->next != NULL)
    {
        *lst = (*lst)->next;
    }
    (*lst)->next = new;
}


int main()
{   

    return 0;
}