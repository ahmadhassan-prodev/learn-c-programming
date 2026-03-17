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
    struct employee Ahmad = {"Ahmad", 101, 12.34};
    // Above syntex is used to write the employee details in one line
    printf("Name is : %s \n",Ahmad.name);
    printf("Code is : %d \n",Ahmad.code);
    printf("Salary is : %f \n",Ahmad.salary);
    return 0;
}