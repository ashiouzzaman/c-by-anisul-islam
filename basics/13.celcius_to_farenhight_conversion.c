#include<stdio.h>
int main(){
   double c_value;
   printf("Enter the celcius value: ");
   scanf("%lf", &c_value);
   
   double f_value = (c_value*1.8)+32;
   printf("In fahrenheit: %.2lf F\n",  f_value); 
}