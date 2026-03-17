#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guess , no_of_guesses = 1;
    srand(time(0));
    number = rand()%100 + 1;
    // printf("The random number is %d\n", number);
    do{
        printf("Guess the number between 1 and 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if (guess<number){
            printf("Higher number please!\n");
        }
        else if(guess==number){
            printf("You guess the correct number!\n");
            printf("Attempts = %d",no_of_guesses);
        }
        no_of_guesses++;
    }while(guess != number);

    return 0;
}