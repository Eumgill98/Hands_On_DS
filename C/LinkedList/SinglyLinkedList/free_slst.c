#include "singly_linked_list.h"

void    free_slst(SinglyListNode *node)
{
    SinglyListNode  *tmp;

    while (node != NULL)
    {
        tmp = node;
        node = node->next;
        del_oneslst(tmp);
    }
}