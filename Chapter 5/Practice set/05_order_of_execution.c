#include<stdio.h>

int main(){
    int a = 5;
    printf("%d %d %d\n",a ,++a ,a++);
    // Order of execution is moved from right to left
    // first a++ --> remains same coz a++ first print then impliment
    // second ++a -> becomes 7 coz 6 + 1 =7
    // third a ----> 7 coz execution moves from right to left so value of a becomes 7
    return 0;
}