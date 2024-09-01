#include "singly_linked_list.h"

void    del_oneslst(SinglyListNode *node)
{
    if (node == NULL)
        return ;
    if (node->is_dynamic && node->data != NULL)
            free(node->data);
        free(node);
}