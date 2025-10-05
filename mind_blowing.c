// #include<stdio.h>
// int main()
// {
//     int a=5;
//     printf("%d%d%d\n",a,++a,a++);
//     return 0;
// }
#include<stdio.h>
int main()
{
    int i=5;
    int*j=&i;
    printf("The value of i is %u",&i);
    printf("\nThe value of j is %p",j);
    return 0;
}
