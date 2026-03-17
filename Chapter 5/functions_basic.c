#include<stdio.h>
void display(); // function prototype

int main(){
    printf("Display function initializing\n");
    display(); // function call
    printf("Display function ends\n");
    return 0;
}
// defination of function
void display(){
    printf("This is display\n");
}
