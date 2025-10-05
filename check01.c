#include<stdio.h>
#include<conio.h>

#define PIE 3.14;

void main()
{
	clrscr();
	
	float Rad,Area;
	Rad=4;
	Area=PIE * Rad*Rad;
	printf("Area of a circle is__> %f",Area);
	getch();
}