#include<stdio.h>
int main(){

    int option;
    float f_temp, c_temp, convertTemp;
    printf("Choose an option from the menu: \n");
    printf("1: Fahrenheit to Celsius.\n");
    printf("2: Celsius to Fahrenheit.\n\n");
    printf("Enter an option: ");
    scanf("%d", &option);

    // Switch case for option section
    switch (option)
    {
    case 1:
        printf("Enter the Fahrenheit temperature: ");
        scanf("%f", &f_temp);
        convertTemp = (f_temp-32)/1.8;
        printf("%.2f C\n", convertTemp);
        break;

    case 2:
        printf("Enter the Celsius temperature: ");
        scanf("%f", &c_temp);
        convertTemp = (1.8 * c_temp) + 32;
        printf("%.2f F\n", convertTemp);
        break;
    
    default:
        printf("Wrong option!\n");
        break;
    }


}