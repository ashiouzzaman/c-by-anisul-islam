#include<stdio.h>
int main(){
    int n_num, sum = 0;
    printf("Enter the value of nth number: ");
    scanf("%d", &n_num);


    // Calculation
    for (int i = 1; i <= n_num; i+=2){
        sum+=i;
    }

    printf("1+3+5+ .... + %d = %d\n", n_num, sum);

}