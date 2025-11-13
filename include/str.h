#include<array.h>
typedef struct
{
    char *char_arr_ptr;
    int size;
} Ds_str__String;

// constructor function
Ds_str__String *Ds_str__new_String(char *char_ptr);
// destructor function
void Ds_str__free_String(Ds_str__String *self);
// init function
void Ds_str__init_String(Ds_str__String *self, char *char_ptr);
// representation function
char *Ds_str__get_str(Ds_str__String *self);
// operation functions
void Ds_String__print_str(Ds_str__String * self);
int Ds_String__get_size(Ds_str__String *self);
Ds_str__String *Ds_String__append(Ds_str__String *self, Ds_str__String *temp_s);
Ds_str__String *Ds_String__capitalize(Ds_str__String *self);
Ds_str__String *Ds_String__title(Ds_str__String *self);
Ds_str__String *Ds_String__lower(Ds_str__String *self);
Ds_str__String *Ds_String__upper(Ds_str__String *self);
int Ds_String__find(Ds_str__String *self);
int Ds_String__rfind(Ds_str__String *self);
int Ds_String__count(Ds_str__String *self);
Ds_str__String *Ds_String__replace(Ds_str__String *self);
Ds_str__String *Ds_String__strip(Ds_str__String *self);
Ds_str__String *Ds_String__join_char_arr(Ds_array__charArray iterable);
Ds_str__String *Ds_String__join_int_arr(Ds_array__intArray iterable);