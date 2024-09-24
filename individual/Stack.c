#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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