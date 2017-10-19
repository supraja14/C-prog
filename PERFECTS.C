/*Program to find if the given number is a perfect square*/

#include<stdio.h>
#include<conio.h>
void main()
{
int x,i,temp;
clrscr();
scanf("%d",&x);
for(i=0;i<=x/2;i++)
{
if(i*i==x)
{
printf("Perfect square");
}
else
{
printf("Not ");
break;
}
}
getch();
}