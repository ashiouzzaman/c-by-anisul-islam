#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Pattern logic
    for (int row = n; row >= 1; row--){
        for(int col = 1; col <= row; col++){
            printf("%d ", row);
        }
        printf("\n");
    }
}