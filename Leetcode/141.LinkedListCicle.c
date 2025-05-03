#include <stdlib.h>

struct ListNode 
{
    int val;
    struct ListNode *next;
} t_list;

int Check_list(struct ListNode *walker, struct ListNode *head)
{
    while (walker->next != head && walker != head)
    {
        head = head->next;
    }
    return walker->next == head;
}

// https://leetcode.com/problems/linked-list-cycle/
int hasCycle(struct ListNode *head) 
{
    struct ListNode *walker = head;

    while (walker != NULL && Check_list(walker, head) == 0)
    {
        walker = walker->next;
    }
    return walker != NULL;
}

// 
// 3 -- 2 -- 0 -- -4
//      |----------|
