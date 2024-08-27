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

int ft_lstadd_front(t_list *head, t_list *new)
{
    if (!new)
        return ;
    new->next = head;
    head = new;
    return head;
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
 
struct List_item* mergeTwoLists(t_list *list1, t_list *list2) {
    t_list *copy_head;
    t_list *list_ans;
    copy_head = list_ans;
    while (list1 != NULL && list2 != NULL)
    {
        if (list1 == NULL)
        {
            list_ans->data = list2->data;
            list1 = list2->next;
        }
        else if (list2 == NULL)
        {
            list_ans->data = list1->data;
            list1 = list1->next;
        }
        else if (list1->data <= list2->data)
        {
            list_ans->data = list1->data;
            list1 = list1->next;
        }
        else
        {
            list_ans->data = list2->data;
            list1 = list2->next;
        }
        t_list *copy_next = list_ans->next;
        t_list *list_ans;
        copy_next = list_ans;
    }
    
    return copy_head;
}

struct List_item* removeNthFromEnd(t_list *head, int n) {
    t_list *copy_head = head;
    t_list *copy_next = head->next;
    int l = 0;

    while (head != NULL)
    {
        head = head->next;
        l++;
    }
    head = copy_head;
    if (l == n)
    {
        free(head);
        return copy_next;
    }
    l = l - n;
    while (l > 1)
    {
        l--;
        head = head->next;
    }
    if (n != 1)
    {
        copy_next = (head->next)->next;
    }
    free(head->next);
    if (n != 1)
    {
        head->next = copy_next;
    }
    else
    {
        head->next = NULL;
    }
    return copy_head;
}

struct stack
{
    struct t_list *head;
};

void push(t_list* head, int n)
{
    t_list *new = malloc(sizeof(t_list));
    new->data = n;
    head = ft_lstadd_front(head, new);
    while (head != NULL)
    {
        printf("%d", head->data);
        head = head->next;
    }
}

int main()
{
    t_list *head = malloc(sizeof(t_list));
    head->data = 2;
    t_list *head1 = malloc(sizeof(t_list));
    head1->data = 1;
    head->next = head1;
    head1->next = NULL;
    int n = 1;


    push(head, n);
    while (head != NULL)
    {
        printf("%d", head->data);
        head = head->next;
    }
    return 0;
}
