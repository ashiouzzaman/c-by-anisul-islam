#include<stdio.h>
int main(){

    printf("Enter any lowercase character: ");
    char l_case;

    scanf("%c", &l_case); // Taking input
    printf("Upper case for %c is %c. \n", l_case, l_case-32);

}