#include<stdio.h>
int main(){

    int x = 10;
    printf("Initial value of x = %d\n", x);

    //Unary operators
    printf("Pre-increment ++x = %d\n", ++x);
    printf("Post-increment x++ = %d\n", x--);
    printf("Pre-decrement --x = %d\n", --x);
    printf("Post-decrement x-- = %d\n", x--);

    printf("Value of x now is %d\n", x);

}