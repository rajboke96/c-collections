#include<stdio.h>
#include<stdlib.h>
#include<ds_generic_type.h>
#include<node.h>
#include<string.h>

void * Ds_Type__printstr__(Ds_Type *self){
    // printf("type: %d, type_name: '%s'\n", self->type_meta.type, self->type_meta.type_name);
    // printf("%p", Ds_List__get(l1, i));
    switch (self->type_meta.type)
    {
    case INT:
        // printf("%p - %d\n", self, *((int *)self->ref));
        printf("%d", *((int *)self->ref));
        break;
    case FLOAT:
        // printf("%p - %f\n", self, *((float *)self->ref));
        printf("%f", *((float *)self->ref));
        break;
    case CHAR:
        // printf("%p - %f\n", self, *((float *)self->ref));
        printf("%c", *((char *)self->ref));
        break;
    case STRING:
        // printf("%p - %s\n", self, (char *)self->ref);
        printf("%s", (char *)self->ref);
        break;
    case DS_NODE:
        Ds_Node__printstr__((Ds_Node *)self->ref);
        // printf("%d", ((Ds_Node *)self->ref)->data);
        break;
    default:
        printf("<object at - %p>", self->ref);
        break;
    }
}
void Ds_Type__new__(enum Ds_Types dstype, void *ptr){

}
void Ds_Type__init__(Ds_Type *self, enum Ds_Types dstype, void *ptr){

}
void Ds_Type__free__(Ds_Type *self){
 if(self!=NULL){
    if(self->ref!=NULL){
        // printf("type: %d, type_name: '%s'\n", self->type_meta.type, self->type_meta.type_name);
        // printf("%p", Ds_List__get(l1, i));
        switch (self->type_meta.type)
        {
        case INT:
            // printf("%p - %d\n", self, *((int *)self->ref));
            // printf("Freeing - %d\n", *((int *)self->ref));
            free(self->ref);
            break;
        case FLOAT:
            // printf("%p - %f\n", self, *((float *)self->ref));
            // printf("Freeing - %f\n", *((float *)self->ref));
            free(self->ref);
            break;
        case CHAR:
            // printf("%p - %f\n", self, *((float *)self->ref));
            // printf("Freeing - %c\n", *((char *)self->ref));
            free(self->ref);
            break;
        case STRING:
            // printf("%p - %s\n", self, (char *)self->ref);
            // printf("Freeing - %s\n", (char *)self->ref);
            free(self->ref);
            break;
        case DS_NODE:
            Ds_Node__free__((Ds_Node *)self->ref);
            break;
        default:
            // printf("Error free function not found for type - '%d'\n", self->type_meta.type);
            break;
        }
    }
    free(self);
    self=NULL;
 }
}