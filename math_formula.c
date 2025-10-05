#include<stdio.h>
#include<math.h>
int main(){
    float distance;
    double x,y,x2,y2;
    printf("enter the value of cordinates x & y:");
    scanf("%lf%lf",&x,&y);

    printf("enter the value of cordinates x2 & y2:");
    scanf("%lf%lf",&x2,&y2);

    distance=sqrt(pow(x2-x,2)+pow (y2-y,2));

    printf("distance between 2 point is %223lf",distance);
}