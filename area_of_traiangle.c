#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,s,area;
    //input the area ofn traianle
    printf("Enter the leangth of three sides of trangle:\n");
    scanf("%lf%lf%lf",&a,&b,&c);

    //check for valid tringle 
    if(a+b>c&&a+c>b&&b+c>a){
        //calculate semi perimeter   
        s=(a+b+c)/2;
        
        //calculate area using heron's formula
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        
        // display the result
        printf("The area of triangle is:%2lf\n",area);
    }else{
        printf("The given sides do not form a valid triangle:\n");
    }
    return 0;
}