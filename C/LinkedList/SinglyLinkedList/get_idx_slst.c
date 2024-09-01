#include "singly_linked_list.h"

size_t  get_idx_slst(SinglyListNode *head, SinglyListNode *node)
{
    size_t  idx;

    idx = 0;
    while (head != NULL)
    {
        if (head == node)
            return (idx);
        head = head->next;
        idx++;
    }
    return (INVALID_INDEX);
}