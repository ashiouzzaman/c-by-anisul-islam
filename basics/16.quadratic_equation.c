// Problem: ax^2 + bx + c = 0;

#include<stdio.h>
#include<math.h>
int main(){
    double a, b, c, d;
    
    printf("Enter a, b, c values: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculating d, x1 & x2;
    d = sqrt(b*b - 4*a*c);
    double x1, x2;
    x1 = (-b+d)/(2*a);
    x2 = (-b-d)/(2*a);
    printf("x1 = %lf\nx2 = %lf\n", x1, x2);

    return 0;

    // Fixed git commit issue

}