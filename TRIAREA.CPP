#include<stdio.h>
#include<conio.h>
void main()
{/*This program is to calculate area and perimeter of square.*/
	int a,b,c;
	clrscr();
	printf("Enter the lenght and height of Triangle");
	scanf("%d%d", &a,&b);
	c=(a*b)/2;
	printf("%d is area of triangle.\n", c);
	getch();
}