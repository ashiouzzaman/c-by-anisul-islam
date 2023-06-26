#include<stdio.h>
int main(){

    // Area of circle = pie x r^2;
    printf("Enter the value of radius (r): ");
    float radius;
    scanf("%f", &radius);

    float pie = 3.1416;
    float area = pie * radius * radius;
    printf("Area of the circle = %.2f\n", area);

    return 0;
}