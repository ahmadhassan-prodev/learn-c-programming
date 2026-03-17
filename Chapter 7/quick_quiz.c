#include<stdio.h>

int main(){
    // Addition of a number to a pointer
    int i=4;
    int *ptr=&i;
    printf("The sum of ptr and 3 is %d\n",*ptr+3);

    // subtraction of a number from pointer
    printf("The subtraction of 3 from ptr is %d\n",*ptr-3);

    // subtarction of one pointer from another pointer
    int *ptr2=&(*ptr);
    printf("The subtraction of ptr from ptr2 is %d\n",*ptr2-*ptr);
    return 0;
}