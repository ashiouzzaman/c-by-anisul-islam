// 1
// 12
// 123

#include<stdio.h>
int main(){
    int n, row, col;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Creating pattern
    for(row = 1; row <= n; row++){
        for(col = 1; col <= row; col++){
            printf("%d ", col);
        }
        printf("\n");
    }
}