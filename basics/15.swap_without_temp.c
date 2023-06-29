#include<stdio.h>
int main(){
    int num1, num2;
    num1 = 6, num2 = 4;
    printf("Before swap: num1 = %d num2 = %d\n", num1, num2);

    // Swapping
    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;
    printf("After swap: num1 = %d num2 = %d\n", num1, num2);
     

}