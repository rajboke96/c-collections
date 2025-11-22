#include<node.h>
#include<array.h>
#ifndef DLL_DEF
#define DLL_DEF
typedef struct {
    Ds_DNode *head;
    int size;
    int dt_size;
} Ds_DLL;

// constructor function
Ds_DLL *Ds_DLL__new__(int dt_size);
// init function
void Ds_DLL__init__(Ds_DLL *self, int dt_size);
// destructor function
void Ds_DLL__free__(Ds_DLL *self);
// operation functions
int Ds_DLL__insert_at_first(Ds_DLL *self, void *data);
int Ds_DLL__insert_at_last(Ds_DLL *self, void *data);
Ds_DNode *Ds_DLL__search(Ds_DLL *self, void *data);
int Ds_DLL__insert_after(Ds_DLL *self, Ds_DNode *tmp_node, void *data);
void *Ds_DLL__delete_at_first(Ds_DLL *self);
void *Ds_DLL__delete_at_last(Ds_DLL *self);
void *Ds_DLL__delete(Ds_DLL *self, void *data);
const Ds_Array *Ds_traverse(Ds_DLL *self);
int Ds_DLL__get_size(Ds_DLL *self);
#endif