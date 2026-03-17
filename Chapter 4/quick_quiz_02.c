#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("First n natural numbers are as follows\n");
    do{
        printf("%d\n", n);
        n--;
    }while(n>0);
    return 0;
}