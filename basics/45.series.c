#include<stdio.h>
int main(){
    int last_num, series_sum = 0;
    printf("Enter the last number of the series: ");
    scanf("%d", &last_num);

    // Calculating the series
    for(int i = 1; i<=last_num; i++){
        series_sum+=i;
        printf("%d\n", series_sum);
    }

    // Showing the output
    printf("1 + 2 + 3 + ....... + %d\n = %d\n", last_num, series_sum);

    return 0;
}