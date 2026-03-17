#include<stdio.h>
#include<string.h>
struct employee{
    char name[15];
    int code;
    float salary;
};

int main(){
    struct employee e1 = {"Ahmad",10,20};
    struct employee *ptr;
    ptr = &e1;
    printf("%d", (*ptr).code);
    
    return 0;
}