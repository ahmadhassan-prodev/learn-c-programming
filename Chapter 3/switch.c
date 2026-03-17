#include<stdio.h>

int main(){
    int rating;
    printf("Enter your ratings (1-5)\n");
    scanf("%d", &rating);
    // If else can be used in place of switch case
    // if(rating == 1){
    //     printf("your rating is 1\n");
    // }
    // else if( rating == 2){
    //     printf("Your rating is 2\n");
    // }
    // else if(rating == 3){
    //     printf("Your rating is 3\n");
    // }
    // else if(rating == 4){
    //     printf("Your rating is 4\n");
    // }
    // else if( rating == 5){
    //     printf("Your rating is 5\n");
    // }
    // else{
    //     printf("Invalid ratings!");
    // }
    switch (rating){
     case 1:
            printf("Your rating is 1\n");
         break;
     case 2:
            printf("Your rating is 2\n");
         break;
     case 3:
            printf("Your rating is 3\n");
         break;
     case 4:
            printf("Your rating is 4\n");
         break;
     case 5:
            printf("Your rating is 5\n");
         break;
     default:
            printf("Invalid Rating!");
    }
    return 0;
}