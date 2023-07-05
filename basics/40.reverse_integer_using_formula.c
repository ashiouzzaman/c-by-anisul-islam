#include<stdio.h>
int main(){

    int num, reverse, temp, reminder;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    // Finding reverse of the given (user input) integer;
    temp = num;
    reverse = 0;
    while (temp != 0){
        reminder = temp % 10;
        reverse = reverse * 10 + reminder;
        temp = temp / 10;
    }

    printf("Reverse of %d is = %d\n", num, reverse);
}