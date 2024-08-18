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

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *copy_next1 = list1->next;
    struct ListNode *copy_next2 = list2->next;
    while (list1 != NULL || list2 != NULL)
    {
        if (list1->next != NULL)
            copy_next1 = list1->next;
        else 
            copy_next1 = NULL;
        if (list2->next != NULL)
            copy_next2 = list2->next;
        else 
            copy_next2 = NULL;
        if (list1->val < list2->val)
        {
            list1->next = list2;
            list1 = copy_next1;
        }
        else
        {
            list2->next = list1;
            list2 = copy_next2;
        }
    }
    return list2;
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
