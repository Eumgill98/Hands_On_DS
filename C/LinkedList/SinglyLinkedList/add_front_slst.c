#include "singly_linked_list.h"

int    add_front_slst(SinglyListNode **node, SinglyListNode *new_node)
{
    if (new_node == NULL)
        return (-1);
    new_node->next = *node;
    *node = new_node;
    return (0);
}