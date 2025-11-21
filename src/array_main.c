#include<stdio.h>
#include<array.h>

int main(){
    Ds_Array *l1 = Ds_Array__new__(sizeof(int));
    int a=10;
    Ds_Array__append(l1, &a);
    a=20;
    Ds_Array__append(l1, &a);
    a=30;
    Ds_Array__append(l1, &a);
    a=40;
    Ds_Array__append(l1, &a);
    for (int i = 0; i < Ds_Array__size__(l1); i++){
        int v=*(int *)Ds_Array__get(l1, i);
        printf("%d ", v);
    }
    Ds_Array__free__(l1);

    Ds_Array *l2 = Ds_Array__new__(sizeof(char));
    char ch='H';
    Ds_Array__append(l2, &ch);
    ch='E';
    Ds_Array__append(l2, &ch);
    ch='L';
    Ds_Array__append(l2, &ch);
    ch='L';
    Ds_Array__append(l2, &ch);
    ch='O';
    Ds_Array__append(l2, &ch);
    for (int i = 0; i < Ds_Array__size__(l2); i++){
        char v=*(char *)Ds_Array__get(l2, i);
        printf("%c ", v);
    }
    Ds_Array__free__(l2);
    
    return 0;
}