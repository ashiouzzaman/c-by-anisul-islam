#include<stdio.h>
int main(){
    int num, temp, armstrong = 0, reminder;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Distinguishing every single number & getting their cube sum (for example, cube sum of 12 is 1^3 + 2^3)
    temp = num;
    while (temp != 0)
    {
        reminder = temp % 10;
        armstrong = armstrong + (reminder * reminder * reminder);
        temp = temp/10;
    }

    // Checking for armstrong
    if(armstrong == num)
        printf("%d is an armstrong number!\n", num);
    else
        printf("%d is not an armstrong number!\n", num);
    
}