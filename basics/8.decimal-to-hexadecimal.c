#include<stdio.h>
int main(){
    printf("Enter a decimal number: ");
    int deci_num;
    scanf("%d", &deci_num);
    printf("Hexa-decimal of decimal %d is = %x\n", deci_num, deci_num);

    return 0;

}