//           1 
//         1 2 
//       1 2 3 
//     1 2 3 4 
//   1 2 3 4 5 
// 1 2 3 4 5 6 
//   1 2 3 4 5 
//     1 2 3 4 
//       1 2 3 
//         1 2 
//           1 

#include<stdio.h>
int main(){
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    // Pattern logic
    for (int row = 1; row <= n; row++){
        if(row < n){
            int count = 1;
            for(int col = n; col>= 1; col--){
                if (col>row)
                {
                    printf("  ");
                }else{
                    printf("%d ", count);
                    count++;
                }
                
            }
        }
        else if(row == n){
            for(int temp_row = n; temp_row >= 1; temp_row--){
                int count = 1;
                for(int col = n; col >= 1; col--){
                    if(col > temp_row){
                        printf("  ");
                    }else{
                        printf("%d ", count);
                        count++;
                    }
                }
                printf("\n");
            }
        }
        printf("\n");

    }
}