#include<stdio.h>
int main(){
    int num, fact, sum = 0, temp, reminder;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking for strong number
    temp = num;
    while (temp != 0)
    {
        reminder = temp % 10;

        // Calculating factorial of the reminder (a digit of the user input (int));
        fact = 1;
        for(int i = 1; i <= reminder; i++){
            fact = fact * i;
        }
        sum += fact;
        temp = temp / 10;
    }

    if(num == sum){
        printf("%d is a STRONG number!\n", num);
    }
    else{
        printf("%d is not a STRONG number!\n", num);
    }

    return 0;
    
}