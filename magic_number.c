#include<stdio.h>
#include<stdlib.h>
int main(){
    int magic,guess;
    
    magic=rand()%10;
 
    printf("Guess the number:");
    scanf("%d",&guess);

    if (magic==guess){
        printf("Right Guess");
    }else{
        printf("Wrong Guess , The number was %d");
    }
}  