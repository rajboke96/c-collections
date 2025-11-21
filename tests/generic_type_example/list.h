#ifndef GENERIC_LIST
#define GENERIC_LIST
// Defining List structure
typedef struct{
    void **arr_ptr;
    int size;
    int capacity;
} Ds_List;
#include<ds_generic_type.h>
// --- BUILT IN METHOD START ---
// constructor function
Ds_List *Ds_List__default_new__();
// Ds_List *Ds_List__new__(void **arr_ptr, int size);
// init function
// void Ds_List__default_init__(Ds_List *self);
// void Ds_List__init__(Ds_List *self, void **arr_ptr, int size);
// destructor function
void Ds_List__free__(Ds_List *self);
// representation function
// char *Ds_List__str__(Ds_List *self);
int Ds_List__size__(Ds_List *self);
void Ds_List__print_str__(Ds_List *self);
// --- BUILT IN METHOD END ---
// operation functions
void Ds_List__extend(Ds_List *self);
int Ds_List__iffullextend(Ds_List *self);
void *Ds_List__get(Ds_List *self, int index);
void Ds_List__put(Ds_List *self,int index, void *data);
void Ds_List__append(Ds_List *self, void *data);
void Ds_List__append_INT(Ds_List *self, int data);
void Ds_List__append_FLOAT(Ds_List *self, float data);
void Ds_List__append_CHAR(Ds_List *self, char data);
void Ds_List__append_STRING(Ds_List *self, char *data);
void Ds_List__append_OTHERTYPES(Ds_List *self, enum Ds_Types type_name, void *ptr);
#endif