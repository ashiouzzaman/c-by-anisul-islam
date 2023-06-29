#include<stdio.h>
int main(){

    int num1, num2, temp;
    num1 = 2, num2 = 3;
    printf("Before swap: num1 = %d num2 = %d\n", num1, num2);

    // Swapping
    temp = num2;
    num2 = num1;
    num1 = temp;

    printf("After swap: num1 = %d num2 = %d\n", num1, num2);


}