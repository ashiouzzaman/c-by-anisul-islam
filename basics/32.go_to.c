#include<stdio.h>
int main(){
    int a = 1;

    comeHere:
        printf("I'm here! %d\n", a);
        a++;
    
    while (a < 5)
        goto comeHere;

    return 0;
}