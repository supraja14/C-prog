/* Pattern printing

1112
3222
3334

*/

#include<stdio.h>
#include<conio.h>

void main()
	{
	int c,n,i,j;

	clrscr();
	scanf("%d",&n);
	c=n-1;
	for(i=1;i<=n;i++)
		{
		if(i%2==0)
			{
			printf("%d",c++);
			}
		for(j=1;j<=n;j++)
			{
			printf("%d",i);
			}
		if(i%2!=0)
			{
			printf("%d",c++);
			}
		printf("\n");
		}
	 getch();
	}