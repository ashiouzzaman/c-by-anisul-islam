#include<stdio.h>
int main(){

    int base, height;
    float area;

    // Base & height input
    printf("Enter base value: ");
    scanf("%d", &base);

    printf("Enter height value: ");
    scanf("%d", &height);

    // Calculate area
    area = 0.5 * base * height;

    //Print result
    printf("Area = %.2f\n", area);




}