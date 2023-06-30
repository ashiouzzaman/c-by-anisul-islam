#include<stdio.h>
#include<math.h>
int main(){

    printf("Enter main number: ");
    int x, y;
    scanf("%d", &x);

    printf("Enter power value: ");
    scanf("%d", &y);

    printf("%d to the power %d is = %.2lf\n", x, y, pow(x, y));

    return 0;

}