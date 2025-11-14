#include<stdio.h>
#include<stdlib.h>
#include<str.h>
#include<char-array.h>
#include<dsint.h>
#include<string.h>

// --- BUILT IN METHOD START ---
// constructor function
Ds_Int *Ds_Int__default_new__(){
    Ds_Int *self=(Ds_Int*) malloc(sizeof(Ds_Int));
    if(self==NULL) return NULL;
    Ds_Int__default_init__(self);
    return self;
}
Ds_Int *Ds_Int__new__(int num){
    Ds_Int *self=(Ds_Int*) malloc(sizeof(Ds_Int));
    if(self==NULL) return NULL;
    Ds_Int__init__(self, num);
    return self;
}
// init function
void Ds_Int__default_init__(Ds_Int *self){
    self->num=0;
}
void Ds_Int__init__(Ds_Int *self, int num){
    self->num=num;
}
// destructor function
void Ds_Int__free__(Ds_Int *self){
    if(self!=NULL){
        free(self);
        self=NULL;
    }
}
// representation function
Ds_String *Ds_Int__str__(Ds_Int *self){
    Ds_CharList *char_list=Ds_CharList__default_new__();
    int num = self->num;
    int rem;
    while (num)
    {
        rem = num%10;
        // printf("%d", rem);  
        Ds_CharList__insert(char_list, 0, '0' + rem);
        num = num/10;
    }
    return Ds_String__new__(char_list);
}
// --- BUILT IN METHOD END ---
// operation functions
int Ds_Int__get(Ds_Int *self){
    return self->num;
}
void Ds_Int__put(Ds_Int *self,int num){
    self->num=num;
}