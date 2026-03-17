#include <stdio.h>
#include <string.h>
// struct is used to create a structure function
struct employee{
    int code;
    float salary;
    char name [20];
};

int main()
{
    struct employee e1;
    e1.code = 120;
    e1.salary = 130.3;
    // e1.name = "Ahamd Hassan" ; ----> this will not work because we acnnot call name directly
    strcpy(e1.name,"Ahmad Hassan");
    printf("%d\n", e1.code);
    printf("%.2f\n", e1.salary);
    printf("%s\n", e1.name);
    return 0;
}