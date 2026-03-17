#include<stdio.h>

int main(){
    int variable;
    printf("Enter the variable\n");
    scanf("variable",&variable);
    printf("The adress of variable is %u", &variable);
    
    return 0;
}