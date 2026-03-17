#include<stdio.h>

int main(){
    int a = 22;
    // In do while function,
    // program run for atleast one time
    // program first print the  value then
    // check the condition
    do{
        printf("The value of a is %d\n", a);
        a++;
    }while(a<10);
    return 0;
}