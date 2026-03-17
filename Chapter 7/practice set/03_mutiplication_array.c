#include<stdio.h>

int main(){
    int num;
    printf("Enter the number for multiplication table\n");
    scanf("%d",&num);
    printf("Multiplication table of %d is as follows:\n",num);
    for(int i=1; i<11; i++){
        int mul = num*i;
        printf("%d x %d = %d\n",num,i,mul);
    }
    return 0;
}