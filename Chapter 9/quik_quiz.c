#include <stdio.h>
#include <string.h>
struct employee
{
    char name[15];
    int code;
    float salary;
};

int main()
{
    struct employee e1;
    strcpy(e1.name, "Ahmad");
    e1.code = 101;
    e1.salary = 120;
    
    struct employee e2;
    strcpy(e2.name, "Ali");
    e2.code = 102;
    e2.salary = 120;

    struct employee e3;
    strcpy(e3.name, "Hamza");
    e3.code = 103;
    e3.salary = 120;
    return 0;
}