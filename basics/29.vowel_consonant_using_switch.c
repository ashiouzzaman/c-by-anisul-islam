#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch)
    {

    // Mutiple case for same statement;
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("%c is Vowel\n", ch);
        break;
    
    default:
        printf("%c is Consonant\n", ch);
        break;
    }
}