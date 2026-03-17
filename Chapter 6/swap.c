#include<stdio.h>
int swap(int *a, int *b);// int *a is used because in swap use use adress
int main(){
    int x= 3, y=4;
    printf("The value of x and y before swap is %d and %d\n",x,y);
    swap(&x,&y);// & refers to adress
    // call the value of x and y by refernce
    printf("The value of x and y after swap is %d and %d\n",x,y);
    return 0;
}
int swap(int *a, int *b){ // * refers to the value of adress
    int temp; // first we make a temp
    temp=*a; // second temp copies the value of a
    *a = *b; // third a contains the value of b
    *b = temp; // value of b is equal to the value of temp(a)

}