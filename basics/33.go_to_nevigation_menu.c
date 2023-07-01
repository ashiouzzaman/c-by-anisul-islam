#include<stdio.h>
int main(){

    int option;

    printf("1: Home\n");
    printf("2: About\n");
    printf("3: Services\n");
    printf("4: Contact us\n");
    printf("Go to: ");
    scanf("%d", &option);

    //Switch case
    switch (option)
    {
    case 1:
        goto home;
        break;
    case 2:
        goto about;
        break;
    case 3:
        goto services;
        break;
    case 4:
        goto contact;
        break;
    
    default:
        printf("Input a correct option!\n");
        break;
    }

    // Go to statements
    home:
        printf("Inside Home\n");

    about:
        printf("Inside About\n");

    services:
        printf("Inside Services\n");

    contact:
        printf("Inside Contact us\n");

    return 0;


}