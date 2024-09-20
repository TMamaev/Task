#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void ft_lstadd_front(t_list **head, t_list *new)
{
    if (!head || !new)
        return ;
    new->next = *head;
    *head = new;
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

typedef struct list_stack
{
    char data;
    struct list_stack *next;
} t_stack;

void push(t_stack** list, char n)
{
    t_stack *new = malloc(sizeof(t_stack));
    
    if (!list || (new = malloc(sizeof(t_stack))) == NULL)
        return ;

    new->data = n;
    new->next = *list;
    *list = new;
    // printf("%d", head1->data);
}

void pop(t_stack** list)
{
    t_stack *copy_head;

    if (!list || !*list)
        return ;
    
    copy_head = *list;
    *list = (*list)->next;
    free(copy_head);
}

int main()
{   
    char s[] = "([])(){}";

    int n = 0;
    for (int i = 0; s[i]; i++)
        n++;
    
    if (n % 2 != 0)
    {
        printf("false");
        return 0;
    }

    t_stack *list = malloc(sizeof(t_stack));
    for (int i = 0; i < n; i++){
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            push(&list, s[i]);
            printf("%c", list->data);
        }
        else
        {
            if ((s[i] == (list->data + 1)) || (s[i] == (list->data + 2)))
            {
                pop(&list);
                printf("0");
            }
            else 
            {
                printf("false");
                return 0;
            }
        }
    }
    printf("true");
    return 0;
}