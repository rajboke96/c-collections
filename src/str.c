#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<str.h>
#include<array.h>

// constructor function
Ds_str__String *Ds_str__new_String(char *char_ptr){
    Ds_str__String *self=(Ds_str__String*) malloc(sizeof(Ds_str__String));
    if(self==NULL) return NULL;
    Ds_str__init_String(self, char_ptr);
    return self; 
}
// detructor function
void Ds_str__free_String(Ds_str__String *self){
    if(self != NULL){
        if(self->char_arr_ptr!=NULL){
            // printf("Freeing char_arr ptr - %s\n", Ds_str__get_str(self));
            free(self->char_arr_ptr);
            self->char_arr_ptr=NULL;
        }
        // printf("Freeing String object ptr\n");
        free(self);
        self=NULL;
    }
}
// init function
void Ds_str__init_String(Ds_str__String *self, char *tmp_char_ptr){
    char *char_ptr = (char *)malloc(sizeof(char) * strlen(tmp_char_ptr));
    if(char_ptr==NULL){
        self=NULL;
        return;
    }
    strcpy(char_ptr, tmp_char_ptr);
    self->char_arr_ptr=char_ptr;
    self->size=strlen(tmp_char_ptr);
}
// representation function
char *Ds_str__get_str(Ds_str__String *self){
    return self->char_arr_ptr;
}
// operation functions
void Ds_String__print_str(Ds_str__String * self){
    printf("%s\n", self->char_arr_ptr);
}
Ds_str__String *Ds_String__append(Ds_str__String *self, Ds_str__String *s){
    int total_size=self->size+s->size;
    char *tmp_ptr=malloc(sizeof(char)*total_size);
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
    Ds_str__String *tmp_s = Ds_str__new_String(tmp_ptr);
    free(tmp_ptr);
    tmp_ptr=NULL;
    return tmp_s;
}
int Ds_String__get_size(Ds_str__String *self){
    return self->size;
}
Ds_str__String *Ds_String__capitalize(Ds_str__String *self){

}
Ds_str__String *Ds_String__title(Ds_str__String *self){

}
Ds_str__String *Ds_String__lower(Ds_str__String *self){

}
Ds_str__String *Ds_String__upper(Ds_str__String *self){

}
int Ds_String__find(Ds_str__String *self){

}
int Ds_String__rfind(Ds_str__String *self){

}
int Ds_String__count(Ds_str__String *self){

}
Ds_str__String *Ds_String__replace(Ds_str__String *self){

}
Ds_str__String *Ds_String__strip(Ds_str__String *self){

}
Ds_str__String *Ds_String__join_char_arr(Ds_array__charArray iterable){

}
Ds_str__String *Ds_String__join_int_arr(Ds_array__intArray iterable){
    
}