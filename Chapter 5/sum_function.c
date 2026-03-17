#include<stdio.h>
int sum(int a, int b, int c); // prototype function

int main(){
    int a, b, c, d;
    printf("Enter number 1\n");
    scanf("%d",&a);
    printf("Enter number 2\n");
    scanf("%d",&b);
    printf("Enter number 3\n");
    scanf("%d",&c);
    d = sum(a , b, c);
    printf("The sum of %d, %d and %d is %d\n", a, b, c, d);
    return 0;
}
int sum(int a, int b, int c){
    int d;
    d = a + b +c;
}