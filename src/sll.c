#include <stdio.h>
#include<stdlib.h>

#include<sll.h>
#include<array.h>

// constructor function
Ds_SLL *Ds_SLL__new__(int dt_size){
    Ds_SLL *self=(DS_SLL *)malloc(DS_SLL);
    if(self==NULL) return NULL;
    Ds_SLL__init__(self, dt_size);
}
// init function
void Ds_SLL__init__(Ds_SLL *self, int dt_size){
    self->dt_size=dt_size;
    self->size=0;
}
// destructor function
void Ds_SLL__free__(Ds_SLL *self){
    if(self!=NULL){
        for(int i=0;i<self->size;i++){
           Ds_Node__delete_at_first(self);
        }
        free(self);
    }
}
// operation functions
int Ds_SLL__insert_at_first(Ds_SLL *self, void *data){
    Ds_Node *new_node=Ds_Node__new__(self->dt_size, data, head);
    head=new_node;
    self->size++;
}
int Ds_SLL__insert_at_last(Ds_SLL *self, void *data){
    Ds_Node *tail=self->head;
    while(tail !=NULL){
        if(tail->next==NULL) break;
        tail=tmp->next;
    }
    Ds_Node *new_node=Ds_Node__new__(self->dt_size, data, NULL);
    if(tail == NULL){
        self->head=new_node;
    } else{
        tail->next=new_node;
    }
    self->size++;
}
int Ds_SLL__insert_after(Ds_SLL *self, Ds_Node *tmp_node, void *data);
Ds_Node *Ds_SLL__search(Ds_SLL *self, void *data);
void *Ds_SLL__delete_at_first(Ds_SLL *self);
void *Ds_SLL__delete_at_last(Ds_SLL *self);
void *Ds_SLL__delete(Ds_SLL *self, void *data);
const Ds_Array *DS_SLL__traverse(Ds_SLL *self);
int Ds_SLL__get_size(Ds_SLL *self){
    return self->size;
}