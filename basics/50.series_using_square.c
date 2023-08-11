#include<stdio.h>
int main(){
    int last_num, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &last_num);

    // Calculation
    for(int i = 1; i <= last_num; i++){
        sum+= (i*i);
    }

    // Printing final result
    printf("1^2 + 2^2 + 3^2 + ...... + %d^2 = %d\n", last_num, sum);


}