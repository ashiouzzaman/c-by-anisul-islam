#include<stdio.h>
#include<math.h>

int main(){
    // Taking input
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    // Round
    printf("Round of %lf is %lf\n", num, round(num));

    // Truncate
    printf("Trunc of %lf is %lf\n", num, trunc(num));

    // Ceiling 
    printf("Ceiling of %lf is %lf\n", num, ceil(num));

    // Floor
    printf("Floor of %lf is %lf\n", num, floor(num));

    return 0;
}