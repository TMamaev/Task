#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct list_item
{
    int data;
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

// #define NULL ((void*)0)

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

// Создать новый элемент списка с содержимым контент
t_list *ft_lstnew(int content)
{
    t_list *new = malloc(sizeof(t_list));

    if (new)
        new->data = content;
    return new;
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
        return ;
    new->next = *lst;
    *lst = new;
}

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    del(lst);
    free(lst);
}

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    while((*lst)->next != NULL)
    {
        del(lst);
        free(*lst);
        *lst = (*lst)->next;
    }
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst->next != NULL)
    {
        f(lst);
        lst = lst->next;
    }
}

// Добавить новый элемент в конец списка
void ft_lstadd_back(t_list **lst, t_list *new)
{
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
    t_list *new;
    t_list **lst;
    t_list *head;

    head = malloc(sizeof(t_list));
    head->data = 2;
    *lst = head;
    new = malloc(sizeof(t_list));
    new->data = 2;
    ft_lstadd_back(lst, new);

    return 0;
}
