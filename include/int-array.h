#ifndef INT_ARRAY_INCLUDE
#define INT_ARRAY_INCLUDE
typedef struct{
    int *arr_ptr;
    int size;
} Ds_array__intArray;

char *Ds_int_array__get_str(Ds_array__intArray *arr_ptr);
#endif