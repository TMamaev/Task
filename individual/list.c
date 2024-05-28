struct list_item
{
    int data;
    struct list_item *next;
};

int length(struct list_item *head)
{
    int length = 0;
    
    while (head != 0)
    {
        length++;
        head = head->next; 
    }
    return length;
}
