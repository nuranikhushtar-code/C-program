// checking the age what should they do in New Nepal?
#include<stdio.h>
int main(){
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);

    if (age>50){
        printf("You are the senior citizen and You should take rest in your home");
    }

    else if(age>30){
        printf("You are elder and you should eligible to take participant the representative member");
    }
    else if(age>=18){
        printf("You can not eligible but you can choose better representative");
    }
    else if(age<18){
        printf("You are not mature but you get qauality of education");
    }
    return 0;


}