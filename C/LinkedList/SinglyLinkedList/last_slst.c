#include "singly_linked_list.h"

SinglyListNode  *last_slst(SinglyListNode *node)
{
    if (node == NULL)
        return (NULL);
    while (node->next != NULL)
        node = node->next;
    return (node);
}