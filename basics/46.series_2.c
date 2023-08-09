#include<stdio.h>
int main(){
    int n1, n2, sum = 0;

    //Taking user input
    printf("Enter the value of last two digits: ");
    scanf("%d%d", &n1, &n2);

    //Calculation
    for(int i = 1, j = i+1; i <= n1; i++, j++){
        printf("%d\t%d\n", i, j);
        int multiplication = i * j;
        sum+=multiplication;
    }

    printf("1*2 + 2*3 + 3*4 + ..... + %d*%d = %d\n", n1, n2, sum);
}