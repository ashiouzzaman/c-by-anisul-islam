#include<stdio.h>
int main(){
    int n, row, col;
    printf("Enter N: ");
    scanf("%d", &n);

    // Pattern code
    for (row = 1; row <= n; row++){
        for(col = 1; col <= n; col++){
            printf("%c ", 64+col);
        }
        printf("\n");
    }
}