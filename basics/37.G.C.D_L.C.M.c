#include<stdio.h>
int main(){

    int num1, num2, n1, n2, reminder, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    // GCD - Greater common divisor
    n1 = num1, n2 = num2; // temporary variable for calculation.
    while(n2 != 0){
        reminder = n1 % n2;
        n1 = n2;
        n2 = reminder;
        gcd = n1;
    }

    printf("G.C.D of %d & %d is = %d\n", num1, num2, gcd);


    // LCM - Least common multiple
    lcm = (num1 * num2)/gcd;
    printf("L.C.M of %d & %d is = %d\n", num1, num2, lcm);

}