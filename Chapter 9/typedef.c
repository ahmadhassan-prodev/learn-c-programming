#include<stdio.h>
#include<string.h>
// typedef is used to give shorter keyword to use struct
typedef struct employee{
    char name[15];
    int code;
    float salary;
}emp; // decleration of keyword
// now we can use emp instead of struct employee
void show (/*struct employee*/ emp emm){
    printf("Employee name is: %s\n",emm.name);
    printf("Employee code is: %d\n",emm.code);
    printf("Employee salary is: %f\n",emm.salary);
}

int main(){
    /*struct employee*/ emp e1;
    strcpy(e1.name,"Ahmad");
    e1.code = 10;
    e1.salary = 12.3;
    show(e1); // only call employee name
    return 0;
}