#include<stdio.h>
#include<stdlib.h>
#include<str.h>
#include<char_array.h>

// --- BUILT IN METHOD START ---
// constructor function
Ds_CharList *Ds_CharList__default_new__(){
    Ds_CharList *self=(Ds_CharList*) malloc(sizeof(Ds_CharList));
    if(self==NULL) return NULL;
    Ds_CharList__default_init__(self);
    return self;
}
Ds_CharList *Ds_CharList__new__(char *arr_ptr, int size){
    Ds_CharList *self=(Ds_CharList*) malloc(sizeof(Ds_CharList));
    if(self==NULL) return NULL;
    Ds_CharList__init__(self, arr_ptr, size);
    return self;
}
// init function
void Ds_CharList__default_init__(Ds_CharList *self){
    self->arr_ptr= (char *) malloc(sizeof(char)*10);
    self->size=0;
    self->capacity=0+10;
}
void Ds_CharList__init__(Ds_CharList *self, char *arr_ptr, int size){
    if (size > 0){
        char *tmp_arr_ptr = (char *) malloc(sizeof(char)*(size+10));
        self->capacity=size+10;
        for (int i = 0; i < size; i++)
        {
            tmp_arr_ptr[i]=arr_ptr[i];
        }
        self->arr_ptr=tmp_arr_ptr;
        self->size=size;
    } else{
        Ds_CharList__default_init__(self);
    }
}
// destructor function
void Ds_CharList__free__(Ds_CharList *self){
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
void Ds_CharList__extend__(Ds_CharList *self){
    char *tmp_arr_ptr = (char *) realloc(self->arr_ptr, sizeof(char)*(self->size+10));
    self->capacity=self->size+10;
    self->arr_ptr=tmp_arr_ptr;
}
// representation function
char *Ds_CharList__str__(Ds_CharList *self){
    return Ds_String__str__(Ds_String__join_CharList(self));
}
int Ds_CharList__size__(Ds_CharList *self){
    return self->size;
}
// --- BUILT IN METHOD END ---
// operation functions
char Ds_CharList__get(Ds_CharList *self, int index){
    return self->arr_ptr[index];
}
void Ds_CharList__put(Ds_CharList *self,int index, char ch){
    self->arr_ptr[index]=ch;
}
void Ds_CharList__insert(Ds_CharList *self,int index, char ch){
    // printf("Appending '%c'\n", ch);
    if(self->size >= self->capacity){
        // printf("capacity = %d, size = %d\n", self->capacity, self->size);
        // printf("Creating more space in array!\n");
        Ds_CharList__extend__(self);
        // printf("After adding space\ncapacity = %d, size = %d\n", self->capacity, self->size);
    }
    for (int i = self->size; i > index; i--)
    {
        self->arr_ptr[i] = self->arr_ptr[i-1];
    }
    self->arr_ptr[index]=ch;
    self->size++;
}
void Ds_CharList__append(Ds_CharList *self, char ch){
    // printf("Appending '%c'\n", ch);
    if(self->size >= self->capacity){
        // printf("capacity = %d, size = %d\n", self->capacity, self->size);
        // printf("Creating more space in array!\n");
        Ds_CharList__extend__(self);
        // printf("After adding space\ncapacity = %d, size = %d\n", self->capacity, self->size);
    }
    self->arr_ptr[self->size++]=ch;
}