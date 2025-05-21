#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED


#include <stdlib.h>
// linklist node struct

typedef struct LL_node
{
    int data;
    struct LL_node *next;

}st_LL_node;

// fns declarations
void Link_list_Examples(void);
void print_nodes(st_LL_node **base_node);



#endif // HEADER_H_INCLUDED
