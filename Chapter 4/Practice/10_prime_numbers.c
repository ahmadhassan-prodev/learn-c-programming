#include<stdio.h>

int main(){
    int n, i=2,prime ;
    printf("Enter the number\n");
    scanf("%d", &n);
    while(i<n){
        if(n%i==0){
            prime = 0;
            break;
        }
        i++;
    }
    if(prime==0){
        printf("The number %d is not a prime\n", n);
    }
    else{
        printf("The number %d is a prime\n",n);
    }
    return 0;
}