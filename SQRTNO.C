#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,i,m;
float p;
clrscr();
scanf("%d",&a);
scanf("%d",&b);
for(i=a;i<=b;i++)
	{
	p=sqrt(i);
	m=p;
	if(p==m)
		{
		printf("%d ",i);
		}
	}
getch();
}