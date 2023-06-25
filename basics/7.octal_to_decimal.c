#include<stdio.h>
int main(){

    printf("Enter an Octal number: ");
    int oct_num;
    scanf("%o", &oct_num);
    printf("Decimal of octal %o is = %d\n", oct_num, oct_num);

    return 0;

}