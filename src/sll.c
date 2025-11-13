#include <stdio.h>
#include<stdlib.h>

#include<collections.h>

Ds_sll__SLL *Ds_sll__new_SLL(){
    Ds_sll__SLL *self=(Ds_sll__SLL*) malloc(sizeof(Ds_sll__SLL));
    Ds_sll__init_SLL(self);
    return self;
}
void Ds_sll__init_SLL(Ds_sll__SLL *self){
    self->head=NULL;
    self->size=0;
}
Ds_str__String *Ds_sll__get_str(Ds_sll__SLL *self){
    Ds_str__String *s;
    Ds_array__intArray *arr;
    s=Ds_int_array__get_str(arr);
    
    // Ds_array__intArray *arr = Ds_sll__traverse(self);
    // Ds_str__String s = Ds_array__get_str(arr);
    return s;
}
int Ds_sll__insert(Ds_sll__SLL *self, int data){

}
Ds_node__Node *sll_search(Ds_sll__SLL *self, int data){

}
int Ds_sll__delete(Ds_sll__SLL *self){

}
const Ds_array__intArray *Ds_sll__traverse(Ds_sll__SLL *self){

}
int Ds_sll__get_size(Ds_sll__SLL *self){
    return self->size;
}
