#include<stdio.h>
int main(){
    int n;
    int a =10;
    printf("Enter the number of table that you want: ");
    scanf("%d",&n);

    for (int i = 1; i <=a; i++)
    {
       printf("%d X %d = %d\n",n, i, n*i);
    }
    
    return 0;

}