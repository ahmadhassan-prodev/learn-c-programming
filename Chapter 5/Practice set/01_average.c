#include<stdio.h>
int average(int a, int b, int c);

int main(){
    int a,b,c, result;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    result = average(a,b,c);
    printf("The average of %d, %d and %d is %d\n",a,b,c,result);
    return 0;
}
int average(int a, int b, int c){
    int result;
    result = (a + b + c)/3;
}