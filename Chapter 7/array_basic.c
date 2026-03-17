#include<stdio.h>

int main(){
    int marks[4];// instead of making marks1, marks2,marks3 ,marks4
    //This syntex is used to store the values for same integer
    marks[0]; // values starting from 0
    marks[1];
    marks[2];
    marks[3];
    printf("Enter the marks of student 1\n");
    scanf("%d", &marks[0]);
    printf("Enter the marks of student 2\n");
    scanf("%d", &marks[1]);
    printf("Enter the marks of student 3\n");
    scanf("%d", &marks[2]);
    printf("Enter the marks of student 4\n");
    scanf("%d", &marks[3]);

    printf("You have entered the marks %d, %d, %d and %d\n",marks[0],marks[1],marks[2],marks[3]);
    return 0;
}