////////////////////////////////////////////
//////// Double Pyramid Pattern ////////////
////////////////////////////////////////////

//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 
//  * * * * 
//   * * * 
//    * * 
//     * 

////////////////////////////////////////////
/////////////////// Code ///////////////////
//////////////////////////////////////////// 

#include<stdio.h>
int main(){
    int n, row, col;
    printf("Enter N:");
    scanf("%d", &n);

    // Upper Pattern
    for(row = 1; row <= n; row++){
        // Printing space
        for(col= 1; col <= n - row; col++){
            printf(" ");
        }
        // Printing pattern style
        for(col = 1; col <= row; col++){
            printf("* ");
        }
        printf("\n");
    }

     // Lower Pattern
    for(row = n-1; row >= 1; row--){
        // Printing space
        for(col= 1; col <= n - row; col++){
            printf(" ");
        }
        // Printing pattern style
        for(col = 1; col <= row; col++){
            printf("* ");
        }
        printf("\n");
    }
}