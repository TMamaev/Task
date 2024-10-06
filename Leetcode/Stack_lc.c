#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_stack
{
    int data;
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

void push_back(long n, t_stack** stack, int k)
{
    t_stack *copy = *stack;
    for (int i = 1; i < k; i++)
    {
        *stack = (*stack)->next;
    }
    t_stack *new = malloc(sizeof(t_stack));
    new->data = n;
    new->next = NULL;
    (*stack)->next = new;
    *stack = copy;
}

int valid_paren()
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
            // printf("%c", list->data);
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

int isPalindrome(t_stack* head) {
    int n = 0;
    int i = 0;
    t_stack *stack = NULL;
    t_stack *c_h = head;

    while (head != NULL)
    {
        n++;
        head = head->next;
    }
    head = c_h;

    for (; i < n / 2; i++)
    {
        push(&stack, head->data);
        head = head->next;
    } 
    if (n % 2 != 0)
    {
        head = head->next;
        i++;
    }
    for (; i < n; i++)
    {
        if (stack->data == head->data)
            pop(&stack);
        else return 0;
        head = head->next;
    }
    return 1;
}

int evalRPN(char** tokens, int tokensSize) {
    long res = 0;
    printf("%d     ", tokensSize);
    t_stack *stack = malloc(sizeof(t_stack));
    stack->data = strtol(tokens[0], NULL, 10); 
    stack->next = NULL;
    t_stack *c_n = stack->next;
    for (int i = 1; i < tokensSize; i++)
    {
        printf("%d ", stack->data);
        if (strcmp(tokens[i], "+") == 0)
        {
            stack->next->data = stack->data + stack->next->data;
            t_stack *copy = stack;
            stack = stack->next;
            free(copy);
        } 
        else if (strcmp(tokens[i], "-") == 0)
        {
            stack->next->data = stack->next->data - stack->data;
            t_stack *copy = stack;
            stack = stack->next;
            free(copy);
        }
        else if (strcmp(tokens[i], "/") == 0)
        {
            stack->next->data = stack->next->data / stack->data;
            t_stack *copy = stack;
            stack = stack->next;
            free(copy);
        }
        else if (strcmp(tokens[i], "*") == 0)
        {
            stack->next->data = stack->next->data * stack->data;
            t_stack *copy = stack;
            stack = stack->next;
            free(copy);
        }
        else 
        {
            printf("  i = %d   ", i);
            long n = strtol(tokens[i], NULL, 10); 
            push(&stack, n);
        }
    }
    res = stack->data;
    return res;
}

int calculate(char* s) {
    int k = 1;
    long res = 0;
    t_stack *stack = malloc(sizeof(t_stack));
    stack->data = strtol(&s[0], NULL, 10); 
    stack->next = NULL;
    for (int i = 2; strcmp(&s[i], "\0") != 0; i++)
    {
        if ((strcmp(&s[i], "/") != 0) && (strcmp(&s[i], "*") != 0) && (strcmp(&s[i], "+") != 0) && (strcmp(&s[i], "-") != 0) && (strcmp(&s[i], " ") != 0))
        {
            long n = strtol(&s[i], NULL, 10); 
            push_back(n, &stack, k);
            k++;
        }
    }
    for (int i = 0; strcmp(&s[i], "\0") != 0; i++)
    {
        if (strcmp(&s[i], "/") == 0)
        {
            stack->next->data = stack->data / stack->next->data;
            t_stack *copy = stack;
            stack = stack->next;
            free(copy);
            
            stack = stack->next;
        }
        else if (strcmp(&s[i], "*") == 0)
        {
            stack->next->data = stack->next->data * stack->data;
            t_stack *copy = stack;
            stack = stack->next;
            free(copy);
            stack = stack->next;
        }
    }
    for (int i = 0; strcmp(&s[i], "\0") != 0; i++)
    {
        if (strcmp(&s[i], "+") == 0)
        {
            stack->next->data = stack->next->data + stack->data;
            t_stack *copy = stack;
            stack = stack->next;
            free(copy);
            stack = stack->next;
        }
        else if (strcmp(&s[i], "-") == 0)
        {
            stack->next->data = stack->data - stack->next->data;
            t_stack *copy = stack;
            stack = stack->next;
            free(copy);
            stack = stack->next;
        }
    }
    res = stack->data;
    return res;
}

int main()
{   
    t_stack *head = malloc(sizeof(t_stack));
    head->data = 1;
    t_stack *head1 = malloc(sizeof(t_stack));
    head1->data = 2;
    t_stack *head2 = malloc(sizeof(t_stack));
    head2->data = 3;
    head->next = head1;
    head1->next = head2;
    head2->next = NULL;
    return 0;
}