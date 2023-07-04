#include<stdio.h>
int main(){

    int num, sum, temp, reminder;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    // Finding sum of the given (user input) integer;
    temp = num;
    sum = 0;
    while (temp != 0){
        reminder = temp % 10;
        sum+=reminder;
        temp = temp / 10;
    }

    printf("Sum of the digits are = %d\n", sum);
}