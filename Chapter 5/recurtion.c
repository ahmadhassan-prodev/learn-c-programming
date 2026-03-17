#include<stdio.h>
int factorial(int a);
int main(){
    int a, b;
    printf("Enter the number\n");
    scanf("%d", &a);
    b = factorial(a);
    printf("The factorial of %d is %d\n", a, b);
    return 0;
}
int factorial(int a){
    if(a==1){
        return 1;
    }
    else{
        return a * factorial(a-1);
    }
}