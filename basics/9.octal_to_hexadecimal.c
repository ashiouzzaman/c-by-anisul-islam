#include<stdio.h>
int main(){

    printf("Enter an OCTAL number: ");
    int oct_num;
    scanf("%o", &oct_num);
    printf("Hexa-decimal of octal %o is = %x\n", oct_num, oct_num);

    return 0;

}