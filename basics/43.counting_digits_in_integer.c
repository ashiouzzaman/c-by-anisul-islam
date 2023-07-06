#include<stdio.h>
int main(){
    int num, temp, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Counting digits
    temp = num;
    while (temp != 0)
    {
        temp = temp/10;
        count++;
    }

    printf("Total digits in %d is = %d digits.\n", num, count);
    
}