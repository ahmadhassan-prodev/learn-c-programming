#include<stdio.h>
#include<string.h>
struct employee{
    char name[15];
    int code;
    float salary;
};
void show (struct employee emm){
    printf("Employee name is: %s\n",emm.name);
    printf("Employee code is: %d\n",emm.code);
    printf("Employee salary is: %f\n",emm.salary);
}

int main(){
    struct employee e1;
    strcpy(e1.name,"Ahmad");
    e1.code = 10;
    e1.salary = 12.3;
    show(e1); // only call employee name
    return 0;
}