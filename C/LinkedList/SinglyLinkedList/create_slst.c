#include "singly_linked_list.h"

SinglyListNode  *create_slst(void *data, char type, int is_dynamic)
{
    SinglyListNode  *new;

    new = (SinglyListNode *)malloc(sizeof(SinglyListNode));
    if (new == NULL)
        return (NULL);
    new->data = data;
    new->type = type;
    new->is_dynamic = is_dynamic;
    new->next = NULL;
    return (new);
}