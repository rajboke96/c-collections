#include<stdio.h>
#include<stdlib.h>
#include<garray.h>
#include<dstype.h>
#include<node.h>

int main(){
    Ds_List *l1=Ds_List__default_new__();
    // Ds_Type *t1=(Ds_Type *)malloc(sizeof(Ds_Type));
    // Ds_Type t2;
    // t2.type=INT;
    // int a=12;
    // t2.ref=&a;
    // Ds_Type t3;
    // t3.type=FLOAT;
    // float b=13.2;
    // t3.ref=&b;
    Ds_List__append_INT(l1, 1);
    Ds_List__append_INT(l1, 2);
    Ds_List__append_INT(l1, 1);
    Ds_List__append_FLOAT(l1, 3.5);
    Ds_List__append_FLOAT(l1, 2.5);
    Ds_List__append_FLOAT(l1, 2.5);
    Ds_List__append_STRING(l1, "Hello!");
    Ds_List__append_STRING(l1, "World!");
    Ds_List__append_STRING(l1, "Learning DSA!");
    Ds_Type *tptr=(Ds_Type *)malloc(sizeof(Ds_Type));
    tptr->type_meta.type=OTHERTYPES;
    tptr->type_meta.type_name="Ds_Node";
    tptr->ref=malloc(sizeof(Ds_Node));
    ((Ds_Node *)(tptr->ref))->data=10;
    Ds_List__append_OTHERTYPES(l1, tptr);
    printf("List size: %d\n", Ds_List__size__(l1));
    for (int i = 0; i < Ds_List__size__(l1); i++)
    {
        Ds_Type *tptr = Ds_List__get(l1, i);
        printf("type: %d, type_name: '%s'\n", tptr->type_meta.type, tptr->type_meta.type_name);
        // printf("%p", Ds_List__get(l1, i));
        switch (tptr->type_meta.type)
        {
        case INT:
            printf("%p - %d\n", tptr, *((int *)tptr->ref));
            break;
        case FLOAT:
            printf("%p - %f\n", tptr, *((float *)tptr->ref));
            break;
        case STRING:
            printf("%p - %s\n", tptr, (char *)tptr->ref);
            break;
        case OTHERTYPES:
            if(tptr->type_meta.type_name == "Ds_Node"){
                printf("%p - %d\n", tptr, ((Ds_Node *)tptr->ref)->data);
            }
            break;
        default:
            break;
        }
    }
    printf("\n");
    
    return 0;
}