#ifndef INT_ARRAY_INCLUDE
#define INT_ARRAY_INCLUDE
#ifndef INT_DEF
#define INT_DEF
typedef struct{
    int num;
} Ds_Int;
#endif
typedef struct{
    Ds_Int **arr_ptr;
    int size;
    int capacity;
} Ds_IntList;

#ifndef STRING_DEF
#define STRING_DEF
typedef struct
{
    int *char_arr_ptr;
    int size;
} Ds_String;
#endif
// --- BUILT IN METHOD START ---
// constructor function
Ds_IntList *Ds_IntList__default_new__();
Ds_IntList *Ds_IntList__new__(Ds_Int **arr_ptr, int size);
// init function
void Ds_IntList__default_init__(Ds_IntList *self);
void Ds_IntList__init__(Ds_IntList *self, Ds_Int **arr_ptr, int size);
// destructor function
void Ds_IntList__free__(Ds_IntList *self);
// representation function
char *Ds_IntList__str__(Ds_IntList *self);
int Ds_IntList__size__(Ds_IntList *self);
// --- BUILT IN METHOD END ---
// operation functions
Ds_Int *Ds_IntList__get(Ds_IntList *self, int index);
void Ds_IntList__put(Ds_IntList *self,int index, Ds_Int *num);
void Ds_IntList__append(Ds_IntList *self, Ds_Int *num);
#endif