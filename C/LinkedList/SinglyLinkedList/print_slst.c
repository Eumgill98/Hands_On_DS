#include "singly_linked_list.h"

static void print_by_type(SinglyListNode *node)
{
    if (node->type == 'i')
        printf("%d", *(int *)node->data);
    else if (node->type == 'l')
        printf("%ld\n", *(long *)node->data);
    else if (node->type == 'c')
        printf("%c\n", *(char *)node->data);
    else if (node->type == 's')
        printf("%s\n", *(char **)node->data);
    else if (node->type == 'f')
        printf("%f\n", *(float *)node->data);
    else if (node->type == 'd')
        printf("%f\n", *(double *)node->data);
    else if (node->type == 'h')
        printf("%d\n", *(short *)node->data); 
    else if (node->type == 'u')
        printf("%u\n", *(unsigned int *)node->data);
    else
        printf("Unknown type");
}

void    print_slst(SinglyListNode *node)
{
    if (node == NULL)
        return ;
    printf("[");
    while (node)
    {
        print_by_type(node);
        node = node->next;
        if (node)
            printf(" ");
    }
    printf("]\n");
}