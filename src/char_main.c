#include<stdio.h>
#include<stdlib.h>
#include<str.h>

int main(){
    // Ds_String *s1=Ds_String__default_new__();
    // printf("Size of '%s' is %d\n", Ds_String__str__(s1), Ds_String__size__(s1));
    // char ptr[]={'A', 'B', 'a', 'D'};
    // Ds_CharList *l1=Ds_CharList__new__(ptr, 4);
    // printf("List - %s\n", Ds_CharList__str__(l1));

    Ds_CharList *l1=Ds_CharList__default_new__();
    Ds_CharList__append(l1, 'H');
    Ds_CharList__append(l1, 'E');
    Ds_CharList__append(l1, 'L');
    Ds_CharList__append(l1, 'L');
    Ds_CharList__append(l1, 'O');
    Ds_CharList__append(l1, '!');
    Ds_CharList__insert(l1, 0, 'W');
    Ds_CharList__insert(l1, 3, 'D');
    printf("List - %s\n", Ds_CharList__str__(l1));
    Ds_CharList__free__(l1);
    return 0;
}