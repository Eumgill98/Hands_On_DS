#include "singly_linked_list.h"

int    add_back_slst(SinglyListNode **node, SinglyListNode *new_node)
{
    SinglyListNode  *last_node;

    if (new_node == NULL)
        return (-1);
    if (*node == NULL)
    {
        *node = new_node;
    }
    else
    {
        last_node = last_slst(*node);
        if (last_node == NULL)
            return (-1);
        last_node->next = new_node;
    }
    return (0);
}