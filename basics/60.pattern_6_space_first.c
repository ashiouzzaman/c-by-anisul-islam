// // Example
//         1 
//       1 2 
//     1 2 3 
//   1 2 3 4 
// 1 2 3 4 5 

#include<stdio.h>
int main(){
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    // Pattern logic
    for (int row = 1; row <= n; row++){
        int count = 1;
        for (int col = n; col >= 1; col--)
        {
            if(col <= row){
                printf("%d ", count);
                count++;
            }else{
                printf("  ");
            }
        }
        printf("\n");
        
    }
}