#include<stdio.h>
int main(){
    float last_float, sum = 0;

    printf("Enter the value of N: ");
    scanf("%f", &last_float);

    for(float i = 1.5; i <= last_float; i++){
        sum+=i;
    }

    printf("1.5 + 2.5 + 3.5 + ..... + %.1f = %.1f\n", last_float, sum);
}