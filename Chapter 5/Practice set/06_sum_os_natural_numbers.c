#include<stdio.h>

int sum(int a);

int main(){
    int a = 10;
    printf("The sum of first 10 natural numbers is %d\n",sum(a));
    
    return 0;
}
// In recurtion function, return is mustly used, otherwise program does not return anything
int sum(int a){
    if(a==1){
        return 1;
    }
    else{
        return a + sum(a-1);
    }
    
}