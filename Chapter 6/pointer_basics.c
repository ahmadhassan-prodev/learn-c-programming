#include<stdio.h>

int main(){
    int i = 34;
    int *j = &i; // this format is used to store the adress of i in j
    int *h = &(*j);// store pointer adress in other pointer
    
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);
    printf("The adress of i is %u\n",j);
    // %u is used to get the  adress of integer 
    // and & is used to call adress
    printf("The adress of i is %u\n",&i);
    printf("The value of j is %u\n",&(*j));
    printf("The adress of j is %u\n",&j);
    printf("The value of j is %d\n", *h);
    printf("The adress of j is %u\n",&(*h));

    return 0;
}