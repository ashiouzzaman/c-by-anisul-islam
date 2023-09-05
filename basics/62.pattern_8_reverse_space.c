// 1 2 3 4 5 6 7 
//   1 2 3 4 5 6 
//     1 2 3 4 5 
//       1 2 3 4 
//         1 2 3 
//           1 2 
//             1 

#include<stdio.h>
int main(){
    int n;
    printf("Enter N: ");
    scanf("%d", &n);


    ////// Pattern logic 1 //////
    ////////////////////////////

    // for(int row = 1; row <= n; row++){
    //     int space = row - 1;
    //     // int count = n - space;
    //     for(int col = 1; col <= n; col++){
    //         if(col <= space){
    //             printf("  ");
    //         }
    //         else{
    //             printf("%d ", col);
    //         }
    //     }
    //     printf("\n");
    // }


    ////// Pattern logic 2 //////
    ////////////////////////////

    for(int row = n; row >= 1; row--){
        int space = n - row;
        for(int col = space; col > 0; col--){
            printf("  ");
        }
        for(int col = 1; col <= row; col++){
            printf("%d ", col);
        }
        printf("\n");
    }

}