#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    //Checking whether capital or small letter
    if(ch >= 'A' && ch <= 'Z'){
        printf("Capital letter\n");
    }
    else if( ch >= 'a' && ch <= 'z' ){
        printf("Small letter\n");
    }
    else{
        printf("Not a letter!\n");
    }
}