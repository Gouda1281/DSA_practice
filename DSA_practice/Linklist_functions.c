#include <stdio.h>
#include <stdlib.h>
#include "header.h"




// create linklist nodes

void create_LL_node( st_LL_node **base_node, int val)
{
    st_LL_node *temp =  (st_LL_node *)malloc(sizeof(st_LL_node));
    temp->data = val;
    temp->next = NULL;

    if(NULL == *base_node)
    {
        *base_node = temp;
        printf("basenode %d\n",temp->data);
    }
    else{

        static int count;
        st_LL_node *last_node =*base_node;

        while(last_node->next != NULL)
        {
            last_node = last_node->next;
        }
        last_node->next  =  temp;
    }

}
//insertAtFirst

//insertAtEnd

//insertAtPosition

//deleteFromFirst

//deleteFromEnd

//deleteAtPosition


//delete n node



// print node
void print_nodes(st_LL_node **base_node)
{
    st_LL_node *last_node =*base_node;

     while(last_node != NULL)
    {
        printf(" node %d\n",last_node->data );
        last_node =  last_node->next;
    }
}



void Link_list_Examples(void)
{

    printf("\nlink list examples\n");

    st_LL_node *base_node = NULL;

    create_LL_node(&base_node, 10);
    create_LL_node(&base_node, 20);
    create_LL_node(&base_node, 30);
    create_LL_node(&base_node, 40);

    print_nodes(&base_node);

}
