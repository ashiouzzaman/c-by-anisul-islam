// Problem: find large number using ternary/conditional operator

#include<stdio.h>
int main(){
    int num1, num2, larger_num;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // finding larger number using conditional/ternary operator
    larger_num = (num1>num2) ? num1:num2;
    printf("Larger number is = %d\n", larger_num);

    return 0;
}