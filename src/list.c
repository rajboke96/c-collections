#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<dstype.h>

// Defining List structure
typedef struct{
    void **arr_ptr;
    int size;
    int capacity;
} Ds_List;

// --- BUILT IN METHOD START ---
// constructor function
Ds_List *Ds_List__default_new__(){
    Ds_List *self = (Ds_List*) malloc(sizeof(Ds_List));
    self->arr_ptr=(void *) malloc(10*sizeof(void *));
    self->size=0;
    self->capacity=10;
}
// Ds_List *Ds_List__new__(void **arr_ptr, int size);
// init function
// void Ds_List__default_init__(Ds_List *self);
// void Ds_List__init__(Ds_List *self, void **arr_ptr, int size);
// destructor function
void Ds_List__free__(Ds_List *self){

}
// representation function
// char *Ds_List__str__(Ds_List *self);
int Ds_List__size__(Ds_List *self){
    return self->size;
}
// --- BUILT IN METHOD END ---
// operation functions
void Ds_List__extend(Ds_List *self){
    self->arr_ptr = (void *) realloc(self->arr_ptr, sizeof(void *)*(self->size+10));
    self->capacity=self->size+10;
}
int Ds_List__iffullextend(Ds_List *self){
    // printf("size=%d, capacity=%d\n", self->size, self->capacity);
    if(self->size>=self->capacity){
        // printf("extending list! creating more space!\n");
        Ds_List__extend(self);
        // printf("After extending, size=%d, capacity=%d\n", self->size, self->capacity);
        return 1;
    }
    return 0;
}
void *Ds_List__get(Ds_List *self, int index){
    return self->arr_ptr[index];
}
void Ds_List__put(Ds_List *self,int index, void *data){
    // printf("Putting data!\n");
    Ds_List__iffullextend(self);
    self->arr_ptr[index]=data;
    self->size++;
    // printf("data added in list!\n");
}
void Ds_List__append(Ds_List *self, void *data){
    // printf("Appending data!\n");
    Ds_List__iffullextend(self);
    self->arr_ptr[self->size++]=data;
    // printf("data appended in list!\n");
}
void Ds_List__append_INT(Ds_List *self, int data){
    Ds_Type *tptr=(Ds_Type *)malloc(sizeof(Ds_Type));
    tptr->type_meta.type=INT;
    tptr->type_meta.type_name="Int";
    tptr->ref=malloc(sizeof(int));
    *(int *)(tptr->ref)=data;
    Ds_List__iffullextend(self);
    self->arr_ptr[self->size++]=tptr;
}
void Ds_List__append_FLOAT(Ds_List *self, float data){
    Ds_Type *tptr=(Ds_Type *)malloc(sizeof(Ds_Type));
    tptr->type_meta.type=FLOAT;
    tptr->type_meta.type_name="Float";
    tptr->ref=malloc(sizeof(float));
    *((float *)(tptr->ref))=data;
    Ds_List__iffullextend(self);
    self->arr_ptr[self->size++]=tptr;
}
void Ds_List__append_STRING(Ds_List *self, char *data){
    if(data == NULL){
        Ds_Type *tptr=(Ds_Type *)malloc(sizeof(Ds_Type));
        tptr->type_meta.type=STRING;
        tptr->type_meta.type_name="Char";
        Ds_List__iffullextend(self);
        self->arr_ptr[self->size++]=tptr;
    }
    else{
        Ds_Type *tptr=(Ds_Type *)malloc(sizeof(Ds_Type));
        tptr->type_meta.type=STRING;
        tptr->type_meta.type_name="Char";
        tptr->ref=malloc(sizeof(char)*strlen(data));
        strcpy(tptr->ref, data);
        Ds_List__iffullextend(self);
        self->arr_ptr[self->size++]=tptr;
    }
}
void Ds_List__append_OTHERTYPES(Ds_List *self, Ds_Type *tptr){
    Ds_List__iffullextend(self);
    self->arr_ptr[self->size++]=tptr;
}