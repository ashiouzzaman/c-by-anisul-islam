//         1 
//       1 2 
//     1 2 3 
//   1 2 3 4 
// 1 2 3 4 5 

// Previous problem using different equation

#include<stdio.h>
int main(){
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    // Pattern logic
    for(int row = 1; row <= n; row++){
        int space = n - row;
        int count = n - space;
        for(int i = 1; i <= space; i++){
            printf("  ");
        }
        for (int col = 1; col <= row; col++){
            printf("%d ", col);
        }
        // for (int i = 1; i <= count; i++){
        //     printf("%d ", i);
        // }
        printf("\n");
    }
}