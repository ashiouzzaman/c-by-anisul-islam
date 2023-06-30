#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Checking for Even Odd
    if(num%2 == 0){
        printf("%d is Even.\n", num);
    }
    else{
        printf("%d is Odd.\n", num);
    }

    return 0;
}