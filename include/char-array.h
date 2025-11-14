#ifndef CHAR_ARRAY_INCLUDE
#define CHAR_ARRAY_INCLUDE
typedef struct{
    char *arr_ptr;
    int size;
    int capacity;
} Ds_CharList;

#ifndef STRING_DEF
#define STRING_DEF
typedef struct
{
    char *char_arr_ptr;
    int size;
} Ds_String;
#endif
// --- BUILT IN METHOD START ---
// constructor function
Ds_CharList *Ds_CharList__default_new__();
Ds_CharList *Ds_CharList__new__(char *char_ptr, int size);
// init function
void Ds_CharList__default_init__(Ds_CharList *self);
void Ds_CharList__init__(Ds_CharList *self, char *char_ptr, int size);
// destructor function
void Ds_CharList__free__(Ds_CharList *self);
void Ds_CharList__extend__(Ds_CharList *self);
// representation function
char *Ds_CharList__str__(Ds_CharList *self);
int Ds_CharList__size__(Ds_CharList *self);
// --- BUILT IN METHOD END ---
// operation functions
char Ds_CharList__get(Ds_CharList *self, int index);
void Ds_CharList__put(Ds_CharList *self,int index, char ch);
void Ds_CharList__insert(Ds_CharList *self,int index, char ch);
void Ds_CharList__append(Ds_CharList *self, char ch);
#endif