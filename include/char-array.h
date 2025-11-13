#ifndef CHAR_ARRAY_INCLUDE
#define CHAR_ARRAY_INCLUDE
typedef struct{
    char *arr_ptr;
    int size;
} Ds_array__charArray;

char *Ds_char_array__get_str(Ds_array__charArray *arr_ptr);
#endif