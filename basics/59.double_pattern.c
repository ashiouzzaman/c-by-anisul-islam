#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Pattern logic
    for(int row = 1; row <= n; row++){
        if(row < n){
            for (int col = 1; col <= row; col++){
                printf("%d ", row);
        }
            printf("\n");
        }
        else if(row == n){
            for(int temp_row = n; temp_row >= 1; temp_row--){
                for (int col = 1; col <= temp_row; col++){
                    printf("%d ", temp_row);
                    }
                printf("\n");
                }
            }
}
}