#include<array.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// --- BUILT IN METHOD START ---
// constructor function
Ds_Array *Ds_Array__new__(int dt_size){
    Ds_Array *self=(Ds_Array *)malloc(sizeof(Ds_Array));
    if(self==NULL) return NULL;
    Ds_Array__init__(self, dt_size);
}
// Ds_Array *Ds_Array__new__(void **arr_ptr, int size);
// init function
void Ds_Array__init__(Ds_Array *self, int dt_size){
    int capacity=10;
    void *tmp = malloc(dt_size*capacity);
    if(tmp==NULL){
        free(self);
        self=NULL;
        return;
    }
    self->arr_ptr=tmp;
    self->capacity=capacity;
    self->dt_size=dt_size;
    self->size=0;
}
// destructor function
void Ds_Array__free__(Ds_Array *self){
    if(self!=NULL){
        if(self->arr_ptr!=NULL){
            free(self->arr_ptr);
            self->arr_ptr=NULL;
        }
        free(self);
        self=NULL;
    }
}

// --- BUILT IN METHOD END ---
// operation functions
void Ds_Array__extend(Ds_Array *self){
    self->arr_ptr = realloc(self->arr_ptr, self->dt_size*(self->size+10));
    self->capacity=self->size+10;
}
int Ds_Array__iffullextend(Ds_Array *self){
    // printf("size=%d, capacity=%d\n", self->size, self->capacity);
    if(self->size>=self->capacity){
        // printf("extending list! creating more space!\n");
        Ds_Array__extend(self);
        // printf("After extending, size=%d, capacity=%d\n", self->size, self->capacity);
        return 1;
    }
    return 0;
}
void *Ds_Array__get(Ds_Array *self, int index){
    if(!(index>=0 && index <= self->size)) return NULL;
    return self->arr_ptr+(self->dt_size*index);
}
void Ds_Array__put(Ds_Array *self, int index, void *data){
    if(!(index>=0 && index < self->capacity)) return;
    Ds_Array__iffullextend(self);
    memcpy(self->arr_ptr+(self->dt_size*index), data, self->dt_size);
    self->size++;
}
void Ds_Array__append(Ds_Array *self,  void *data){
    Ds_Array__iffullextend(self);
    int index=self->size;
    memcpy(self->arr_ptr+(self->dt_size*index), data, self->dt_size);
    // printf("%d", *((int *)(Ds_Array__get(self, 1))));
    self->size++;
}