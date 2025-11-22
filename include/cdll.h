#include<node.h>
#include<array.h>
#ifndef CDLL_DEF
#define CDLL_DEF
typedef struct {
    Ds_DNode *head;
    int size;
    int dt_size;
} Ds_CDLL;

// constructor function
Ds_CDLL *Ds_CDLL__new__(int dt_size);
// init function
void Ds_CDLL__init__(Ds_CDLL *self, int dt_size);
// destructor function
void Ds_CDLL__free__(Ds_CDLL *self);
// operation functions
int Ds_CDLL__insert_at_first(Ds_CDLL *self, void *data);
int Ds_CDLL__insert_at_last(Ds_CDLL *self, void *data);
Ds_DNode *Ds_CDLL__search(Ds_CDLL *self, void *data);
int Ds_CDLL__insert_after(Ds_CDLL *self, Ds_DNode *tmp_node, void *data);
void *Ds_CDLL__delete_at_first(Ds_CDLL *self);
void *Ds_CDLL__delete_at_last(Ds_CDLL *self);
void *Ds_CDLL__delete(Ds_CDLL *self, void *data);
const Ds_Array *DS_CDLL__traverse(Ds_CDLL *self);
int Ds_CDLL__get_size(Ds_CDLL *self);
#endif