#include<stdio.h>
#include<ctype.h>
int main(){

    printf("Enter any uppercase latter: ");
    char u_case;

    scanf("%c", &u_case);
    printf("Lowercase letter for %c is %c\n", u_case, tolower(u_case));

    return 0;
}