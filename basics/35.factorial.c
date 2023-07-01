#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int factorial = 1;
    for(int i = 2; i<=num; i++){
        
        printf("%d x %d = %d\n", factorial, i,factorial = factorial * i );
    }
    printf("%d! = %d\n", num, factorial);
}