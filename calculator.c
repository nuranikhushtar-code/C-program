#include<stdio.h>
int main(){
    char operator;
    float num1,num2,Result;
    printf("Enter the symbol what you want to do(+,-,*,/,): ");
    scanf("%c", &operator);
    printf("Enter two number: ");
    scanf("%f%f",&num1,&num2);


    switch(operator){
        case '+':
            Result=num1+num2;
            printf("Addition= %f\n",Result);
            break;

        case '-':
            Result=num1-num2;
            printf("%2f - %2f = %2f\n",num1,num2,Result);
            break;

        case '*':
            Result=num1*num2;
            printf("%2f * %2f = %2f\n",num1,num2,Result);
            break;
        
        case '/':
            if(num2 !=0){
            Result=num1/num2;
            printf("%2f / %2f = %2f\n",num1,num2,Result);
            break;
            }else{
                printf("error\n");
            }
            break;
        default:
            printf("invalid operator\n");
    }
    return 0;
}
    