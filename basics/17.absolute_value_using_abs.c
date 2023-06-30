#include<stdio.h>
#include<stdlib.h>

int main(){
    
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);

    printf("ABSOLUTE VALUE OF %d is = %d\n", num, abs(num));
    return 0;
}