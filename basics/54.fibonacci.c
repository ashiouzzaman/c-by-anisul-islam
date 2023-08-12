// 0 1 1 2 3 5 8 ....... N (Fibonacci number = addition of previous two numbers)

#include<stdio.h>
int main(){

      //////////////////////////////////////////
     ////// Fibonacci with count limit ////////
    //////////////////////////////////////////

    int first = 0, second = 1, fib, count_limit;
    printf("Enter fibonacci count limit: ");
    scanf("%d", &count_limit);
    
    for(int i = 0; i < count_limit; i++){
        if(i <= 1){
            fib = i;
        }
        else{
            fib = first + second;
            first = second;
            second = fib;
        }
        printf("%d\t", fib);
    }




      //////////////////////////////////////////
     ////// Fibonacci till any number /////////
    //////////////////////////////////////////

    // int fib = 1, first = 0, second = 1, last_num;
    // printf("Enter the last number of fibonacci: ");
    // scanf("%d", &last_num);
    // printf("%d\t%d\t", first, second);

    // while(fib <= last_num){
    //     printf("%d\t", fib);
    //     first = second;
    //     second = fib;
    //     fib = first + second;
    // }
}