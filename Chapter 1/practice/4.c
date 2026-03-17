#include<stdio.h>

int main(){
    int celcius;
    int fahrenhiet;
    printf("Enter the value of Celcius Temperature\n");
    scanf("%d", &celcius);
    printf("The value of Fahrenhiet Temperature is %d\n", (celcius*9/5)+32);
    return 0;
}