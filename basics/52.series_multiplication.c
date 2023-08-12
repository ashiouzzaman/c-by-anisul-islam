// 2 * 4 * 6 * .... * N = ?

#include<stdio.h>
int main(){
    int last_num, multi = 1;
    printf("Enter the value of N: ");
    scanf("%d", &last_num);

    // Calculation
    for(int i = 2; i <= last_num; i+=2){
        multi*=i;
    }

    printf("2 * 4 * 6 * .... * %d = %d\n", last_num, multi);
}