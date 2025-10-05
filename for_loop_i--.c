#include<stdio.h>
int main(){
    int i;
    printf("Enter the value that you count from up: ");
    scanf("%d",&i);
    for ( i; i--;){
        printf("%d\n",i);
    }
    
}

/*input = 5

output =
4
3
2
1
0
*/