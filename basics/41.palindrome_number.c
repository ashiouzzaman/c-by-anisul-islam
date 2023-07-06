#include<stdio.h>
int main(){
    int num, temp, reminder, reverse = 0;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Finding reverse;
    temp = num;
    while(temp != 0){
        reminder = temp % 10;
        reverse = reverse * 10 + reminder;
        temp = temp / 10;
    }
    
    // Checking for palindrome;
    if(num == reverse){
        printf("%d & %d is a palindrome number!\n", num, reverse);
    }
    else{
        printf("%d & %d is not a palindrome number!\n", num, reverse);

    }



}