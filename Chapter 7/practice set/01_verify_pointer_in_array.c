#include<stdio.h>

int main(){
    int arr [10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr= &arr[0];
    int *ptr2= &(*ptr) +2;
    printf("The value of ptr+2 is %d\n",*ptr2);
    return 0;
}