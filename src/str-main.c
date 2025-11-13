#include<stdio.h>
#include<stdlib.h>
#include<collections.h>

int main(){
    Ds_str__String *s1=Ds_str__new_String("Hello World!");
    printf("s1 - %s\n", Ds_str__get_str(s1));
    Ds_str__free_String(s1);

    char *cptr = malloc(6*sizeof(char));
    cptr[0]='H';
    cptr[1]='E';
    cptr[2]='L';
    cptr[3]='L';
    cptr[4]='O';
    cptr[5]='\0';
    Ds_str__String *s2=Ds_str__new_String(cptr);
    free(cptr);
    cptr=NULL;
    printf("s2 - %s\n", Ds_str__get_str(s2));
    Ds_str__free_String(s2);
    return 0;
}