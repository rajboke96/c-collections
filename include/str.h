#ifndef STR_INCLUDE
#define STR_INCLUDE

#ifndef STRING_DEF
#define STRING_DEF
typedef struct
{
    char *char_arr_ptr;
    int size;
} Ds_String;
#endif
#include<char_array.h>
#include<int_array.h>
// --- BUILT IN METHOD START ---
// constructor function
Ds_String *Ds_String__default_new__();
Ds_String *Ds_String__new__(Ds_CharList *charlist_ptr);
// init function
void Ds_String__default_init__(Ds_String *self);
void Ds_String__init__(Ds_String *self, Ds_CharList *charlist_ptr);
// destructor function
void Ds_String__free__(Ds_String *self);
// representation function
char *Ds_String__str__(Ds_String *self);
int Ds_String__size__(Ds_String *self);
// --- BUILT IN METHOD END ---
// operation functions
Ds_String *Ds_String__concat(Ds_String *self, Ds_String *temp_s);
Ds_String *Ds_String__capitalize(Ds_String *self);
Ds_String *Ds_String__title(Ds_String *self);
Ds_String *Ds_String__lower(Ds_String *self);
Ds_String *Ds_String__upper(Ds_String *self);
int Ds_String__find(Ds_String *self);
int Ds_String__rfind(Ds_String *self);
int Ds_String__count(Ds_String *self);
Ds_String *Ds_String__replace(Ds_String *self);
Ds_String *Ds_String__strip(Ds_String *self);
Ds_String *Ds_String__join_CharList(Ds_CharList *char_list);
Ds_String *Ds_String__join_IntList(Ds_IntList *int_list);
#endif