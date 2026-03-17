#include<stdio.h>
#include<stdlib.h> // this function is used to geneate random number
#include<time.h> // This function is used to generate new random number on other time
int main(){
    int number;
    srand(time(0)); // This is used to generate different random numbers
    number= rand()%100 + 1; // This generates number between 1 and 100
    printf("The random numbre is %d", number);
    return 0;
}