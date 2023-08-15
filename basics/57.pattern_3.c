// Alphabetic pattern
// A
// A B
// A B C
// A B C D

#include<stdio.h>
int main(){

    int pattern_length, row, col;
    printf("Enter pattern length N: ");
    scanf("%d", &pattern_length);

    for(row = 1; row <= pattern_length; row++){
        for(col = 1; col <= row; col++){
            printf("%c ", col+64); // for small letter add 96 with col
        }
        printf("\n");
    }
}