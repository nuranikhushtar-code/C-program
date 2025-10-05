// finding simple intrest 
#include<stdio.h>
int main(){
    float P,T,R;
    float SI;
    printf("Enter the value of principal,Time,Rate: \n");
    // printf("\nEnter the time period: ");
    // printf("Enter the time period: ");
    scanf("%f%f%f",&P,&T,&R);

    // printf("Enter the time period: ");
    // scanf("%f",&T);

    //  printf("Enter the rate of intrest: ");
    // scanf("%f",&R);

    SI = P*T*R/100;
    // SI = I/100;
    printf("The simple intrest of is:%2f",SI);

    return 0;


}