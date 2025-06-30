#ifndef LIST_H  
#define LIST_H 

typedef struct list_item
{
    void* data;
    struct list_item *next;
} t_list;
int lst_length(struct list_item *head);
t_list *lst_last(t_list *head);
void ft_lstadd_front(t_list **head, void* data);
void ft_lstclear(t_list **lst, void (*func)(void *));
void ft_lstadd_back(t_list **lst, void* data);

#endif