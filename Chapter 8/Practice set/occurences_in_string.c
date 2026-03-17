#include<stdio.h>
int occurences(char st[], char c){
    char *ptr = st;
    int count = 0;
    while(*ptr!='\0'){
        if(*ptr==c){
            count++;
        }
        ptr++;
    }
    return count;
};

int main(){
    char st[30];
    printf("Enter the name\n");
    scanf("%s", &st);
    int count = occurences(st, 'a');
    printf("Occurences of a = %d", count);
    
    return 0;
}