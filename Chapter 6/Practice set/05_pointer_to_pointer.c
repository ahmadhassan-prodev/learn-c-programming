#include<stdio.h>

int main(){
    int i = 4;
    int *ptr= &i;// one * is used for one pointer
    int **ptr2= &ptr; // ** is used from pointer to pointer
    printf("The value of i is %d\n",**ptr2);
    return 0;
}