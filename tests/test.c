#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// #define PI "BYE"; // preprocessor replaces PI with 3.14
// static char ch='D'; // compiler keeps static and global variables in .data section
// const char *chp = "BYE";
// chp="Bye";
int main(){
    // printf("before, chp - %s\n", chp);
    // chp="Byee";
    // printf("after, chp - %s\n", chp);
    // chp[0]='d';
    // e.g 1 - without '\0'
    // char arr1[]={'c', 'P'};
    // printf("%s\n", arr1);
    // printf("%i", arr1[2]);
    
    // e.g 2 - printing garbage int values
    // int arr2[]={1, 2};
    // printf("%i\n", arr2[3]);

    // e.g 3 - Adding '\0' at end
    // char arr3[]={'a', 's', 'd', '\0'};
    // printf("%s", arr1);

    // e.g 4 - checking '\0' for arr1 which above didn't defined '\0'
    // int i=0;
    // while (arr1[i]!='\0')
    // {
    //     printf("%c", arr1[i]);
    //     i++;
    // }
    // printf("\nNull Character Found at %i", i);

    // e.g 5 - printing empty char list
    // char arr4[]={};
    // printf("%s\n", arr4);
    // printf("%i - %c\n", arr4[0], arr4[0]);
    // printf("%i - %c\n", arr4[10], arr4[10]);

    // e.g 6 digits to char
    // int num = -22;
    // int rem;
    // while (num)
    // {
    //     rem = num%10;
    //     printf("%c", rem);   
    //     num = num/10;
    // }

    // e.g 7 check pointer variable value when declared and not initialize
    // char *ptr;
    // printf("ptr val is: %p\n", ptr); // prints to (nil)
    // if(ptr==NULL) printf("%s", "ptr val is: NULL!\n");

    // e.g 5 check int, float variable value when declared and not initialize
    // char ch;
    // printf("char val is: '%c'\n", ch); // prints to empty: ''
    // int a;
    // printf("int val is: %d\n", a); // prints to 0

    // e.g 6 strcmp example
    // char *str1="Hello";
    // char *str2="Hello";
    // int res=strcmp(str1, str2);
    // if(res==0){
    //     printf("Matched!\n");
    // } 
    // else{
    //     printf("Not matched!\n");
    // }

    // e.g 7 const string example
    // char *str1="Hello";
    // free(str1); // invalid pointer - because str1 is statically allocated memory in stack.
    // str1="World";
    // str1[0]='D'; // Segmentation fault error because string literal store in .rodata section
    // printf("5th char - %c\n", str1[5]);
    // printf("%s\n", str1);

    return 0;
}