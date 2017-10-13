/*
	1
       2 2
      3 3 3
*/

#include<stdio.h>
#include<conio.h>
void main()
	{

	int k,n,r,c,sp;
	clrscr();
	scanf("%d",&n);
	k=n;
	for(r=1;r<=k;r++)
		{
		for(sp=1;sp<=n;sp++)
			{
				printf(" ");
			}
		for(c=1;c<=r;c++)
			{
				printf("%d",r);
				printf(" ");
			}
		printf("\n");
		n=n-1;
		}
	getch();
	}