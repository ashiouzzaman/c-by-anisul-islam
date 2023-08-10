#include<stdio.h>
int main(){
    int n_number;
    printf("Enter the value of N: ");
    scanf("%d", &n_number);

    // Odd numbers
    printf("Odd numbers from 1 to %d are \n", n_number);
    for(int i = 1; i <= n_number; i+=2){
        printf("%d ", i);
    }

    printf("\n");

    // Even numbers
    printf("Even numbers from 1 to %d are \n", n_number);
    for(int i = 2; i <= n_number; i+=2){
        printf("%d ", i);
    }
}