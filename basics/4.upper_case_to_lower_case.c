#include<stdio.h>
int main(){

    printf("Enter any uppercase character: ");
    char u_case;

    scanf("%c", &u_case); // Taking input
    printf("Lower case for %c is %c. \n", u_case, u_case+32);
}