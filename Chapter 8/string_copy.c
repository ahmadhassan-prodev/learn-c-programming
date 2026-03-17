#include<stdio.h>
#include<string.h>

int main(){
    char source[]= "Ahamd";
    char target[30];
    strcpy(target,source);// it replaces the target string with source string
    printf("The target becomes %s\n", target);
    return 0;
}