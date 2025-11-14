#include<stdio.h>
int main(){
    int a=120;
    char b='D';
    // char l1[4]={};
    // e.g 1 - without '\0'
    // char arr1[]={'c', 'P'};
    // printf("%s\n", arr1);
    // printf("%i", arr1[2]);
    
    // e.g 2 - printing garbage int values
    // int arr2[]={1, 2};
    // printf("%i\n", arr2[3]);

    // e.g 4 - Adding '\0' at end
    // char arr3[]={'a', 's', 'd', '\0'};
    // printf("%s", arr1);

    // e.g 3 - checking '\0' for arr1 which above didn't defined '\0'
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

    // digits to char
    int num = -22;
    int rem;
    while (num)
    {
        rem = num%10;
        printf("%c", rem);   
        num = num/10;
    }
    return 0;
}