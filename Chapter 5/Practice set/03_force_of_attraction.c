#include<stdio.h>

int main(){
    float force; int mass ; float acceleration = 9.8;
    printf("Enter the value of mass\n");
    scanf("%d", &mass);
    force = mass * acceleration;
    printf("The force of attraction of mass of %d Kg is %.1f Newton\n", mass,force);
    // %.1f ----> used to set the no of decimals after point
    return 0;
}