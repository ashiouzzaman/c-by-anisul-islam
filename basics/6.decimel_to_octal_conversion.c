#include<stdio.h>
int main(){
    printf("Enter a decimal number: ");
    int deci_num;
    scanf("%d", &deci_num);
    printf("Octal of decimal %d is = %o\n", deci_num, deci_num);

    return 0;

}