#include<stdio.h>

int main(){
    int a = 4;
    printf("The value after a is %d\n", a++);
    // a++ --> first print then increment
    printf("The value after a is %d\n", ++a);
    // ++a --> first increment then print
    printf("%d", a += 10);
    // += means value increment by 10 not by 1
    return 0;
}