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

int new_lst(t_list *head, int new)
{
     while (head->next != NULL)
    {           
        head = head->next;
    }
    head = head->next;
    head = malloc(new);
    return head;
}




int main()
{
    lst_last(NULL);

    // struct list_item *head;
    // struct list_item item;
    // struct list_item item2;
    // struct list_item item3;
    // struct list_item *ptr;

    // head = &item;
    // head->next = &item2;
    // item2.next = &item3;
    // item3.next = NULL;
    
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
