#ifndef ARRAY_DEF
#define ARRAY_DEF
// Defining List structure
typedef struct{
    void *arr_ptr;
    int dt_size;
    int size;
    int capacity;
} Ds_Array;
// --- BUILT IN METHOD START ---
// constructor function
Ds_Array *Ds_Array__new__(int dt_size);
// Ds_Array *Ds_Array__new__(void **arr_ptr, int size);
// init function
void Ds_Array__init__(Ds_Array *self, int dt_size);
// destructor function
void Ds_Array__free__(Ds_Array *self);
// representation function
// char *Ds_Array__str__(Ds_Array *self);
int Ds_Array__size__(Ds_Array *self);
void Ds_Array__print_str__(Ds_Array *self);
// --- BUILT IN METHOD END ---
// operation functions
void Ds_Array__extend(Ds_Array *self);
int Ds_Array__iffullextend(Ds_Array *self);
void *Ds_Array__get(Ds_Array *self, int index);
void Ds_Array__put(Ds_Array *self,int index, void *data);
void Ds_Array__append(Ds_Array *self, void *data);
#endif