#include<stdio.h>
int main (){
    int a;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    while(a<10 && a>0){
        printf("%d\n", a-1);
        a--;
    }

    return 0;
}