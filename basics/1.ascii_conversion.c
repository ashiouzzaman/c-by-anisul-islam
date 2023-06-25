#include<stdio.h>
int main(){

    //NUM --> ASCII

    // We will take an integer ASCII value & show the corresponding ASCII character.
    printf("Enter any ASCII number: ");
    int ascii_num;
    scanf("%d", &ascii_num); // Taking the input
    printf("ASCII character for %d is %c. \n", ascii_num, ascii_num); // Converting the integer into ASCII char.

    return 0;
    
}
