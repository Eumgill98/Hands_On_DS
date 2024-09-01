#ifndef SINGLY_LINKED_LIST_H
# define SINGLY_LINKED_LIST_H

#include <stdlib.h>
#include <stdio.h>

// define
#define INVALID_INDEX ((size_t)-1)

// Node Struct
typedef struct  s_singly_list_node
{
    void    *data; // data pointer
    char    type; // data type
    int     is_dynamic; //data is dynamic? 
    struct s_singly_list_node   *next; // next node address
}   SinglyListNode;

SinglyListNode  *create_slst(void *data); // create new node
SinglyListNode  *last_slst(SinglyListNode *node); // move to last node

int             add_back_slst(SinglyListNode *node, SinglyListNode *new_node); // append new node back
int             add_front_slst(SinglyListNode *node, SinglyListNode *new_node); // append new node front

void    free_slst(SinglyListNode *node, int is_dynamic); // free slst
void    print_slst(SinglyListNode *node); //print slst
void    del_oneslst(SinglyListNode *node); // delete one node 

size_t          get_idx_slst(SinglyListNode *head, SinglyListNode *node); // get node idx

#endif