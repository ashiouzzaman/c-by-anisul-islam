#include<stdio.h>
int main(){

    // ASCII --> NUM
    // We will take an ASCII character & show the corresponding ASCII number.
    printf("Enter any character: ");
    char ascii_char;
    scanf("%c", &ascii_char); // Taking the input
    printf("\nASCII number for %c is %d. \n", ascii_char, ascii_char); // Converting the integer into ASCII char.

    return 0;
}