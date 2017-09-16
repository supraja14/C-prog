/*  Swap two numbers without using a third variable  */


#include<conio.h>
#include<stdio.h>
void main()
{
int a,b;
scanf("%d",&a);
scanf("%d",&b);
printf("\na: %d b: %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\na: %d b: %d",a,b);
getch();
}