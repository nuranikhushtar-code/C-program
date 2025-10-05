// WAP to convert celsius to fahrenheit .
#include<stdio.h>
int main(){
    float c,f;
    printf("Enter the value of Celsius : ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("The value of fahrenheit is: %f",f);
    return 0;
}