#include<stdio.h>

int main(){
    int physics, chemistry, biology, total;
    printf("Enter your physics marks\n");
    scanf("%d", &physics);
    printf("Enter your chemistry marks\n");
    scanf("%d", &chemistry);
    printf("Enter your biology marks\n");
    scanf("%d", &biology);
    total = (physics + chemistry + biology)/3;
    if(total >= 40 && physics >= 33 && chemistry >= 33 && biology >= 33)
    {
        printf("You are pass\n");
    }
    else{
        printf("You are fail\n");
    }
    return 0;
}