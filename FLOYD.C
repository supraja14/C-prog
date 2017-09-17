/* FLOYD'S TRIANGLE */
#include<stdio.h>
#include<conio.h>
	void main()
		{
		int i,j,number=1,n;
		clrscr();
		scanf("%d",&n);
		printf("\n");
		for(i=1;i<=n;i++)
			{
			for(j=1;j<=i;++j)
				{
				printf("%d   ",number);
				++number;
				}
			printf("\n");
			}
		getch();
		}