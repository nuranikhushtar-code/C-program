#include<stdio.h>
int main(){
    int i = 0;
    int n;
    printf("enter the value of i: ");
    scanf("%d",&n);
    do
    {
        printf("The value of i is %d\n",i);
        i++;
    } while(i<n);

    return 0;
}