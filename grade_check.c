#include<stdio.h>
int main(){
    int mark;
    printf("enter the mark of student: ");
    scanf("%d",&mark);
    if(mark>100){
        printf("Enter the valid mark");
    }

    else if (mark>=90 || mark<0){
        printf("Grade A");
    }
    else if (mark>=75){
        printf("Grade B");
    }
    else if (mark>=60){
        printf("Grade C");
    }
    else if (mark>=50){
        printf("Grade D");
    }
    else{ 
    (mark<50);
        printf("Grade F");
    }
    

    return 0;


}
