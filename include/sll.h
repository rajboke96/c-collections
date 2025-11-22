#include<node.h>
#include<array.h>
#ifndef SLL_DEF
#define SLL_DEF
typedef struct {
    Ds_Node *head;
    int size;
    int dt_size;
} Ds_SLL;

// constructor function
Ds_SLL *Ds_SLL__new__(int dt_size);
// init function
void Ds_SLL__init__(Ds_SLL *self, int dt_size);
// destructor function
void Ds_SLL__free__(Ds_SLL *self);
// operation functions
int Ds_SLL__insert(Ds_SLL *self, int data);
Ds_Node *Ds_SLL__search(Ds_SLL *self, int data);
int Ds_SLL__delete(Ds_SLL *self);
const Ds_Array *Ds_traverse(Ds_SLL *self);
int Ds_SLL__get_size(Ds_SLL *self);
#endif