#include<stdio.h>
int main(){
    int num, count = 0;
    printf("Enter any number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++){
        if( num % i == 0){
            count++;
            break;
        }
    }

    if( count == 0){
            printf("%d is a prime number\n", num);
        }
    else{
            printf("%d is not a prime number\n", num);
        }








////////////////////////////////
//////////// 2nd Way ///////////
////////////////////////////////

    // //Checking for prime
    // for(int i = 2; i < num; i++){
    //     if(num%i == 0){
    //         printf("%d is not a prime number!\n", num);
    //         break;
    //     }
    //     else{
    //         count++;
    //     }
        
    //     if (count == num -2)
    //     {
    //         printf("%d is a prime number!\n", num);
    //     }
        
    // }
}