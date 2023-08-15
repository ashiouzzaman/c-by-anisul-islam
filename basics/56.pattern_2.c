// Binary pattern
// 1
// 1 0
// 1 0 1
// 1 0 1 0

#include<stdio.h>
int main(){

    int pattern_length, row, col;
    printf("Enter pattern length N: ");
    scanf("%d", &pattern_length);

    for(row = 1; row <= pattern_length; row++){
        for(col = 1; col <= row; col++){
            if(col%2 == 0){
                printf("0 ");
            }
            else{
                printf("1 ");
            }
        }
        printf("\n");
    }
}