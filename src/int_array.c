#include<stdio.h>
#include<stdlib.h>
#include<str.h>
#include<int_array.h>

// --- BUILT IN METHOD START ---
// constructor function
Ds_IntList *Ds_IntList__default_new__(){
    Ds_IntList *self=(Ds_IntList*) malloc(sizeof(Ds_IntList));
    if(self==NULL) return NULL;
    Ds_IntList__default_init__(self);
    return self;
}
Ds_IntList *Ds_IntList__new__(Ds_Int **arr_ptr, int size){
    Ds_IntList *self=(Ds_IntList*) malloc(sizeof(Ds_IntList));
    if(self==NULL) return NULL;
    Ds_IntList__init__(self, arr_ptr, size);
    return self;
}
// init function
void Ds_IntList__default_init__(Ds_IntList *self){
    self->arr_ptr= (Ds_Int **) malloc(sizeof(Ds_Int*)*10);
    self->size=0;
    self->capacity=0+10;
}
void Ds_IntList__init__(Ds_IntList *self, Ds_Int **arr_ptr, int size){
    if (size > 0){
        Ds_Int **tmp_arr_ptr = (Ds_Int **) malloc(sizeof(Ds_Int*)*(size+10));
        self->capacity=size+10;
        for (int i = 0; i < size; i++)
        {
            tmp_arr_ptr[i]=arr_ptr[i];
        }
        self->arr_ptr=tmp_arr_ptr;
        self->size=size;
    } else{
        Ds_IntList__default_init__(self);
    }
}
// destructor function
void Ds_IntList__free__(Ds_IntList *self){
    if(self != NULL){
        if(self->arr_ptr!=NULL){
            // printf("Freeing char_arr ptr - %s\n", Ds_String__str__(self));
            free(self->arr_ptr);
            self->arr_ptr=NULL;
        }
        // printf("Freeing String object ptr\n");
        free(self);
        self=NULL;
    }
}
void Ds_IntList__extend__(Ds_IntList *self){
    // printf("Reallocating memory! size = %d\n", self->size);
    Ds_Int **tmp_arr_ptr = (Ds_Int **) realloc(self->arr_ptr, sizeof(Ds_Int*)*(self->size+10));
    self->capacity=self->size+10;
    self->arr_ptr=tmp_arr_ptr;
}
// representation function
char *Ds_IntList__str__(Ds_IntList *self){
    return Ds_String__str__(Ds_String__join_IntList(self));
}
int Ds_IntList__size__(Ds_IntList *self){
    return self->size;
}
// --- BUILT IN METHOD END ---
// operation functions
Ds_Int *Ds_IntList__get(Ds_IntList *self, int index){
    return self->arr_ptr[index];
}
void Ds_IntList__put(Ds_IntList *self,int index, Ds_Int *num){
    self->arr_ptr[index]=num;
}
void Ds_IntList__append(Ds_IntList *self, Ds_Int *num){
    // printf("Appending '%c'\n", ch);
    if(self->size >= self->capacity){
        // printf("capacity = %d, size = %d\n", self->capacity, self->size);
        // printf("Creating more space in array!\n");
        Ds_IntList__extend__(self);
        // printf("After adding space\ncapacity = %d, size = %d\n", self->capacity, self->size);
    }
    self->arr_ptr[self->size++]=num;
}