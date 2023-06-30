#include<stdio.h>
#include<math.h>

int main(){
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    printf("Square root of %d is %.2lf\n", num, sqrt(num));

    return 0;
}