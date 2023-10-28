////////////////////////////////////////////
/////////////// Reverse Pattern ////////////
////////////////////////////////////////////

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

    // Pattern code
    for(row = n; row >= 1; row--){

        // Printing space
        for(col=1; col <= n - row; col++){
            printf("  ");
        }

        // Printing pattern style
        for(col = 1; col <= 2*row-1; col++){
            printf("* ");
        }

        printf("\n");
    }
}