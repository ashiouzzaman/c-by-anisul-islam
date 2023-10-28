////////////////////////////////////////////
////////// Double Pyramid Pattern //////////
////////////////////////////////////////////

//             * 
//           * * * 
//         * * * * * 
//       * * * * * * * 
//     * * * * * * * * * 
//   * * * * * * * * * * * 
// * * * * * * * * * * * * * 
//   * * * * * * * * * * * 
//     * * * * * * * * * 
//       * * * * * * * 
//         * * * * * 
//           * * * 
//             * 

////////////////////////////////////////////
/////////////////// Code ///////////////////
////////////////////////////////////////////

#include<stdio.h>
int main(){
    int n, col, row;
    printf("Enter N:");
    scanf("%d", &n);

    // Upper pyramid
    for(row = 1; row <= n; row++){
        for(col=1; col <= n - row; col++){
            printf("  ");
        }
        for(col = 1; col <= 2*row-1; col++){
            printf("* ");
        }

        printf("\n");
    }

    // Lower pyramid
    for(row = n-1; row >= 1; row--){
        for(col=1; col <= n - row; col++){
            printf("  ");
        }
        for(col = 1; col <= 2*row-1; col++){
            printf("* ");
        }

        printf("\n");
    }
}

