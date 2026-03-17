#include<stdio.h>
void display();
int area(int a);

int main(){
    int a, b;
    display();
    scanf("%d", &a);
    b = area(a);
    printf("The are of %d is %d\n",a, b);
    return 0;
}
void display(){
    printf("Enter the value of one side of square\n");
}
int area(int a){
    int area;
    area = a*a;
}