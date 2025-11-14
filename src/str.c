#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

#include<str.h>
#include<char-array.h>
#include<int-array.h>
#include<dsint.h>

// --- BUILT IN METHOD START ---
// constructor function
Ds_String *Ds_String__default_new__(){
    Ds_String *self=(Ds_String*) malloc(sizeof(Ds_String));
    if(self==NULL) return NULL;
    Ds_String__default_init__(self);
    return self; 
}

Ds_String *Ds_String__new__(Ds_CharList *charlist_ptr){
    Ds_String *self=(Ds_String*) malloc(sizeof(Ds_String));
    if(self==NULL) return NULL;
    Ds_String__init__(self, charlist_ptr);
    return self; 
}
// init function
void Ds_String__default_init__(Ds_String *self){
    int size=1;
    char *char_ptr = (char *) malloc(sizeof(char) * size);
    if(char_ptr==NULL){
        self=NULL;
        return;
    }
    char_ptr[0]='\0';
    self->char_arr_ptr=char_ptr;
    self->size=size;
}
void Ds_String__init__(Ds_String *self, Ds_CharList *charlist_ptr){
    int size=Ds_CharList__size__(charlist_ptr);
    if(size > 0){
        bool hasNullCh = true;
        if(Ds_CharList__get(charlist_ptr, size-1) != '\0'){
            hasNullCh=false;
            size++;
        }
        char *char_ptr = (char *) malloc(sizeof(char) * size);
        if(char_ptr==NULL){
            self=NULL;
            return;
        }
        for (int i = 0; i < size; i++)
        {
            if(i==size-1 && !hasNullCh) char_ptr[i]='\0';
            else char_ptr[i]=Ds_CharList__get(charlist_ptr, i);
        }
        self->char_arr_ptr=char_ptr;
        self->size=size;
    } 
    else{
        Ds_String__default_init__(self);
    }
}
// destructor function
void Ds_String__free__(Ds_String *self){
    if(self != NULL){
        if(self->char_arr_ptr!=NULL){
            // printf("Freeing char_arr ptr - %s\n", Ds_String__str__(self));
            free(self->char_arr_ptr);
            self->char_arr_ptr=NULL;
        }
        // printf("Freeing String object ptr\n");
        free(self);
        self=NULL;
    }
}
// representation function
char *Ds_String__str__(Ds_String *self){
    return self->char_arr_ptr;
}
int Ds_String__size__(Ds_String *self){
    return self->size-1;
}
// --- BUILT IN METHOD END ---

// operation functions
Ds_String *Ds_String__concat(Ds_String *self, Ds_String *s){
    int total_size=self->size+s->size;
    char *tmp_ptr=(char *)malloc(sizeof(char)*total_size);
    int i=0;
    while (self->char_arr_ptr[i]!='\0')
    {
        tmp_ptr[i]=self->char_arr_ptr[i];
        i++;
    }
    int j=0;
    while (s->char_arr_ptr[j]!='\0')
    {
        tmp_ptr[i]=s->char_arr_ptr[j];
        j++;
        i++;
    }
    Ds_String *tmp_s = Ds_String__new__(Ds_CharList__new__(tmp_ptr, total_size));
    free(tmp_ptr);
    tmp_ptr=NULL;
    return tmp_s;
}
Ds_String *Ds_String__capitalize(Ds_String *self){

}
Ds_String *Ds_String__title(Ds_String *self){

}
Ds_String *Ds_String__lower(Ds_String *self){

}
Ds_String *Ds_String__upper(Ds_String *self){

}
int Ds_String__find(Ds_String *self){

}
int Ds_String__rfind(Ds_String *self){

}
int Ds_String__count(Ds_String *self){

}
Ds_String *Ds_String__replace(Ds_String *self){

}
Ds_String *Ds_String__strip(Ds_String *self){

}
Ds_String *Ds_String__join_CharList(Ds_CharList *char_list){
    Ds_CharList *tmp_char_list = Ds_CharList__default_new__();
    Ds_CharList__append(tmp_char_list, '[');
    for (int i = 0; i < Ds_CharList__size__(char_list)-1; i++)
    {
        Ds_CharList__append(tmp_char_list, Ds_CharList__get(char_list, i));
        Ds_CharList__append(tmp_char_list, ' ');
        Ds_CharList__append(tmp_char_list, ',');
    }
    Ds_CharList__append(tmp_char_list, ' ');
    Ds_CharList__append(tmp_char_list, Ds_CharList__get(char_list, Ds_CharList__size__(char_list)-1));
    Ds_CharList__append(tmp_char_list, ']');
    return Ds_String__new__(tmp_char_list);
}
// Ds_String *Ds_String__join_IntList(Ds_IntList *int_list){
//     Ds_CharList *tmp_char_list = Ds_CharList__default_new__();
//     Ds_CharList__append(tmp_char_list, '[');
//     for (int i = 0; i < Ds_IntList__size__(int_list)-1; i++)
//     {
//         Ds_CharList__append(tmp_char_list, '0' + Ds_IntList__get(int_list, i));
//         Ds_CharList__append(tmp_char_list, ' ');
//         Ds_CharList__append(tmp_char_list, ',');
//     }
//     Ds_CharList__append(tmp_char_list, ' ');
//     Ds_CharList__append(tmp_char_list, '0' + Ds_IntList__get(int_list, Ds_IntList__size__(int_list)-1));
//     Ds_CharList__append(tmp_char_list, ']');
//     return Ds_String__new__(tmp_char_list);
// }
Ds_String *Ds_String__join_IntList(Ds_IntList *int_list){
    Ds_String *s1 = Ds_String__new__(Ds_CharList__new__("[", 1));
    Ds_Int *num;
    for (int i = 0; i < Ds_IntList__size__(int_list)-1; i++)
    {
        num=Ds_IntList__get(int_list, i);
        s1=Ds_String__concat(s1, Ds_Int__str__(num));
        s1 = Ds_String__concat(s1, Ds_String__new__(Ds_CharList__new__(",", 1)));
    }
        s1=Ds_String__concat(s1, Ds_Int__str__(num));
        s1 = Ds_String__concat(s1, Ds_String__new__(Ds_CharList__new__("]", 1)));
    return s1;
}