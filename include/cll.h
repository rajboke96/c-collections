#include<node.h>
#include<array.h>
#ifndef CLL_DEF
#define CLL_DEF
typedef struct {
    Ds_Node *tail;
    int size;
    int dt_size;
} Ds_CLL;

// constructor function
Ds_SLL *Ds_CLL__new__(int dt_size);
// init function
void Ds_CLL__init__(Ds_CLL *self, int dt_size);
// destructor function
void Ds_CLL__free__(Ds_CLL *self);
// operation functions
int Ds_CLL__insert_at_first(Ds_CLL *self, void *data);
int Ds_CLL__insert_at_last(Ds_CLL *self, void *data);
Ds_Node *Ds_CLL__search(Ds_CLL *self, void *data);
int Ds_CLL__insert_after(Ds_CLL *self, Ds_Node *tmp_node, void *data);
void *Ds_CLL__delete_at_first(Ds_CLL *self);
void *Ds_CLL__delete_at_last(Ds_CLL *self);
void *Ds_CLL__delete(Ds_CLL *self, void *data);
const Ds_Array *DS_CLL__traverse(Ds_CLL *self);
int Ds_CLL__get_size(Ds_CLL *self);
#endif