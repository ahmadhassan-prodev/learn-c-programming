#include<stdio.h>

int main(){
    int Ideology, Islamiat, Physics , Discrete, ICT ,English, Obtained; float Total;
    printf("Enter the marks of Ideology\n");
    scanf("%d",&Ideology);
    printf("Enter the marks of Islamiat\n");
    scanf("%d",&Islamiat);
    printf("Enter the marks of Physics\n");
    scanf("%d",&Physics);
    printf("Enter the marks of Discrete\n");
    scanf("%d",&Discrete);
    printf("Enter the marks of ICT\n");
    scanf("%d",&ICT);
    printf("Enter the marks of English\n");
    scanf("%d",&English);
    Obtained = Ideology + Islamiat + Physics + Discrete + ICT + English ;
    Total = 5.1;
    printf("Your percentage is %f",( Obtained  / Total));
    return 0;
}