#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter two numbers to compare: ");
    scanf("%d%d", &num1, &num2);

    // Finding the higher numer
    if(num1 > num2){
        printf("%d\n", num1);
    }
    else if(num2 > num1){
        printf("%d\n", num2);
    }
    else{
        printf("Both are equal!\n");
    }

    return 0;
}