#include<stdio.h>
#include<stdlib.h>
#include<list.h>
#include<ds_generic_type.h>
#include<node.h>

int main(){
    Ds_List *l1=Ds_List__default_new__();
    Ds_List__append_INT(l1, 1);
    Ds_List__append_INT(l1, 2);
    Ds_List__append_INT(l1, 1);
    Ds_List__append_FLOAT(l1, 3.5);
    Ds_List__append_FLOAT(l1, 2.5);
    Ds_List__append_FLOAT(l1, 2.5);
    Ds_List__append_STRING(l1, "Hello!");
    Ds_List__append_STRING(l1, "World!");
    Ds_List__append_STRING(l1, "Learning DSA!");
    Ds_Node *head=malloc(sizeof(Ds_Node));
    head->data=10;
    Ds_Node *node1_ptr=malloc(sizeof(Ds_Node));
    node1_ptr->data=20;
    head->next=node1_ptr;
    Ds_Node *node2_ptr=malloc(sizeof(Ds_Node));
    node2_ptr->data=30;
    node1_ptr->next=node2_ptr;
    Ds_Node *node3_ptr=malloc(sizeof(Ds_Node));
    node3_ptr->data=40;
    node2_ptr->next=node3_ptr;
    Ds_Node *node4_ptr=malloc(sizeof(Ds_Node));
    node4_ptr->data=50;
    node3_ptr->next=node4_ptr;
    Ds_List__append_OTHERTYPES(l1, DS_NODE, head);
    Ds_List__append_OTHERTYPES(l1, DS_NODE, head);
    Ds_List__append_OTHERTYPES(l1, DS_NODE, head);
    Ds_List__append_OTHERTYPES(l1, DS_NODE, head);
    printf("List size: %d\n", Ds_List__size__(l1));
    Ds_List__print_str__(l1);
    printf("\n");
    Ds_List__free__(l1);
    return 0;
}