#include<stdio.h>
int main (){
    int i =1;
    int sum = 0;
    int n;
    printf("Enter the  num to sum: ");
    scanf("%d",&n);
    while (i<=n)
    {
        sum +=i;
        i++;
    }
    printf("The sum of all natural number are :%d",sum);
    return 0;
}

