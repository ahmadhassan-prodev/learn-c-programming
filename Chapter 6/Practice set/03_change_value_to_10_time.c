#include<stdio.h>
int swap(int *a){
    int temp;
    temp = *a;
    *a = 10*temp;
}
int main(){
    int x = 4;
    printf("The value of x before swap is %d\n", x);
    swap(&x);
    printf("The value of x after swap is %d\n", x);
    return 0;
}