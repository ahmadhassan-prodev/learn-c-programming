#include<stdio.h>

int main(){
    int n;
    int i=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Multiplication table of %d is as follows:\n", n);
    while(i<11){
        printf("%d X %d = %d\n",n,i, n*i);
        i++;
    }
    return 0;
}