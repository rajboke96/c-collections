#include<stdio.h>
#include<stdlib.h>
#include<str.h>

int main(){
    // Ds_String *s1=Ds_String__default_new__();
    // printf("Size of '%s' is %d\n", Ds_String__str__(s1), Ds_String__size__(s1));

    Ds_CharList *chlist1 = Ds_CharList__new__("hello", 5);
    Ds_String *s2=Ds_String__new__(chlist1);
    // Ds_CharList *chlist2 = Ds_CharList__new__("hello", 5);
    // Ds_String *s3=Ds_String__new__(chlist2);
    // Ds_String *s4=Ds_String__concat(s2, s3);
    // printf("s4 = %s", Ds_String__str__(s4));
    return 0;
}