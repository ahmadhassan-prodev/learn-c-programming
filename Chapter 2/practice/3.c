#include<stdio.h>

int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Divisibilty test returns:%d", num % 97);// "%" is used for reminder, if reminder is 0 then number is divisibe otherwise not
    return 0;
}