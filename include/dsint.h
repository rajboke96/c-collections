#ifndef DSINT_INCLUDE
#define DSINT_INCLUDE
#ifndef STRING_DEF
#define STRING_DEF
typedef struct
{
    int *char_arr_ptr;
    int size;
} Ds_String;
#endif
#ifndef INT_DEF
#define INT_DEF
typedef struct{
    int num;
} Ds_Int;
#endif
// --- BUILT IN METHOD START ---
// constructor function
Ds_Int *Ds_Int__default_new__();
Ds_Int *Ds_Int__new__(int num);
// init function
void Ds_Int__default_init__(Ds_Int *self);
void Ds_Int__init__(Ds_Int *self, int num);
// destructor function
void Ds_Int__free__(Ds_Int *self);
// representation function
Ds_String *Ds_Int__str__(Ds_Int *self);
// --- BUILT IN METHOD END ---
// operation functions
int Ds_Int__get(Ds_Int *self);
void Ds_Int__put(Ds_Int *self,int num);
#endif
