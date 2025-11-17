#include<stdio.h>
#include<stdlib.h>
#include<node.h>

void Ds_Node__printstr__(Ds_Node *self){
    // printf("Node(data=%d, next=(", self->data);
    if(self->next == NULL)
        printf("Ds_Node(data=%d, next->NULL)", self->data);
    else{
        printf("Ds_Node(data=%d, next->", self->data);
        Ds_Node__printstr__(self->next);
        printf(")");
    }
}
void Ds_Node__free__(Ds_Node *self){
    if(self !=NULL){
        // printf("Freeing - Node with data: %d", self->data);
        if(self->next !=NULL){
            Ds_Node__free__(self->next);
            self->next=NULL;
        }
        free(self);
        self=NULL;
    }
}