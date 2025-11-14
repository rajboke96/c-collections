#include<stdio.h>
#include<dsint.h>
#include<str.h>
int main(){
    Ds_Int *i=Ds_Int__new__(100);
    Ds_String *s=Ds_Int__str__(i);
    printf("%s", Ds_String__str__(s));
    return 0;
}