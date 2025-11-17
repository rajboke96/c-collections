#include<stdio.h>
#include<stdlib.h>
#include<int_array.h>

int main(){
    // Ds_String *s1=Ds_String__default_new__();
    // printf("Size of '%s' is %d\n", Ds_String__str__(s1), Ds_String__size__(s1));
    // char ptr[]={'A', 'B', 'a', 'D'};
    // Ds_IntList *l1=Ds_IntList__new__(ptr, 4);
    // printf("List - %s\n", Ds_IntList__str__(l1));
    Ds_IntList *l1=Ds_IntList__default_new__();
    for (int i = 0; i < 100; i++)
    {
        Ds_IntList__append(l1, Ds_Int__new__(i));
    }
    printf("List - %s\n", Ds_IntList__str__(l1));
    printf("size = %d\n", Ds_IntList__size__(l1));
    Ds_IntList__free__(l1);
    return 0;
}