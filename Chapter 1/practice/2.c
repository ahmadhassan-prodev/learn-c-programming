#include<stdio.h>

int main(){
    float pi = 3.14;
    int radius;
    printf("Enter the value of radius\n");
    scanf("%d", &radius);
    printf("The area of circle is %f", pi * radius * radius);
    return 0;
}