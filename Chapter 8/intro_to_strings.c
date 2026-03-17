#include<stdio.h>

int main(){
    // char str[]= {'A','A','A','A','A','\0'};
    // \0 is used to terminate the string
    // instead of this method we can use
    char str[]= "Ahmad";// in this method compiler itself add '\0' at the end of string
    // char *ptr = str; 
    // character must be stored in a character pointer
    // while(*ptr != '\0'){
    // printf("%c",*ptr);
    // *ptr++;
    // }
    for(char *ptr=str;*ptr != '\0'; *ptr++){
        printf("%c",*ptr);
    }
    return 0;
}