#include<stdio.h>
#include<string.h>
// first create a vector structure which is assigned a keyword vec
typedef struct vector{
    int x;
    int y;
} vec;
// create sum vector inside struct vector
struct vector sumvector(vec v1, vec v2){
    // create vector result inside sumvector
    struct vector result;
    result.x = v1.x + v2.x;// add x components to x
    result.y = v1.y + v2.y;// add y components to y
    return result;
};

int main(){
    vec v1;
    v1.x = 5;
    v1.y = 9;

    vec v2;
    v2.x = 7;
    v2.y = 5;
    // as we make sumvector a vector so, assigned sum as a vector
    vec sum = sumvector(v1, v2);
    printf("sum of X is %d and Y is %d\n",sum.x,sum.y);

    return 0;
}