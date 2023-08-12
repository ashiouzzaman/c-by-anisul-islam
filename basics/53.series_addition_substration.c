// 1 - 2 + 3 - 4 + 5 - 6 ..... N = ?

#include<stdio.h>
int main(){
    int last_num, sum_odds = 0, sum_evens = 0, sub;
    printf("Enter the value of N: ");
    scanf("%d", &last_num);


    // 1 - Solve by even odd condition check //
    for(int i = 0; i <= last_num; i++){
        if(i%2==0){
            sum_evens+=i;
        }
        else{
            sum_odds+=i;
        }
    }
    

    // 2 - Solve by regular even odd //

    // // Addition for odd numbers
    // for(int i = 1; i <= last_num; i+=2){
    //     sum_odds+=i;
    // }

    // // Addition for even numbers
    // for(int i = 2; i <= last_num; i+=2){
    //     sum_evens+=i;
    // }

    // Final Subtraction
    sub = sum_odds - sum_evens;

    printf("1 - 2 + 3 - 4 + 5 - 6 ..... %d = %d\n", last_num, sub);
}