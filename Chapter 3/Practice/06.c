#include<stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    int num4;
    printf("Enter the Number\n");
    scanf("%d", &num1);
    printf("Enter the Number\n");
    scanf("%d", &num2);
    printf("Enter the Number\n");
    scanf("%d", &num3);
    printf("Enter the Number\n");
    scanf("%d", &num4);
    if(num1 > num2 && num1 > num3 && num1 > num4){
        printf("The greatest number is %d", num1);
    }
    else if(num2 > num1 && num2 >num3 &&num2 > num4){
        printf("The greatest number is %d", num2);
    }
    else if(num3 > num2 && num3 >num1 &&num3 > num4){
        printf("The greatest number is %d", num3);
    }
    else if(num4 > num2 &&num4 > num3 && num4 >num1){
        printf("The greatest number is %d", num4);
    }
    return 0;
}