#include<stdio.h>
int main(){

    // Area of rectangle = width x length;
    printf("Enter width: ");
    float width;
    scanf("%f", &width);

    printf("Enter length: ");
    float length;
    scanf("%f", &length);

    float area = width * length;
    printf("Area of the rectangle = %.2f\n", area);

    return 0;
}