// 1 + 1/2 + 1/3 + ...... + 1/N= ?

#include<stdio.h>
int main(){
    float last_num, sum = 0;
    printf("Enter the value of N: ");
    scanf("%f", &last_num);

    // Calculation
    for(float i = 1; i <= last_num; i++){
        sum+= (1/i);
    }

    printf("1 + 1/2 + 1/3 + ...... + 1/%.0f = %.2f \n", last_num, sum);
}