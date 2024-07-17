#include <stddef.h>
#include <stdio.h>

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

// Добавить новый элемент в конец списка
void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (!new)
        return;
    while (*lst->next != NULL)
        *lst = *lst->next;
    *lst->next = new;

}


void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
        return ;
    new->next = *lst;
    *lst = new;
}


int main()
{
    lst_last(NULL);

    struct list_item *head;
    struct list_item item;
    struct list_item item2;
    struct list_item item3;
    struct list_item *ptr;

    head = &item;
    head->next = &item2;
    item2.next = &item3;
    item3.next = NULL;
    
    // struct list_item *list = malloc(sizeof(struct list_item));

    // while (ptr != NULL)
    // {
    //     scanf("%d", &(ptr->data));
    //     ptr = ptr->next;
    // }
    
    // printf("%d", length(head));
    //for (int i = 6; i != 0; i--)
    //{
    //    scanf("%d", &(head->data));
    //    head = head->next;
    //}
    return 0;
}
