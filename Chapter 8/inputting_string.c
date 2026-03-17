#include<stdio.h>

int main(){
    char str[30];
    // string always store one character 
    // for storing more character, we use string array
    printf("Enter your name\n");
    scanf("%s",str); // it can work for only one word name
    // str is already a adress of str array 
    // so, we don't use adress(&) again
    printf("Your name is %s",str);
    return 0;
}