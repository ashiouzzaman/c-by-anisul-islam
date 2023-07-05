#include<stdio.h>
int main(){

    int num, temp, reminder;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    // Printing reverse of the given (user input) integer;
    temp = num;
    // sum = 0;
    while (temp != 0){
        reminder = temp % 10;
        // sum+=reminder;
        printf("%d",reminder);
        temp = temp / 10;
    }

    printf("\n");
}