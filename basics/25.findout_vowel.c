#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking for vowel
    if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("Vowel.\n");
    }
    else{
        printf("Consonant!\n");
    }

    return 0;
}