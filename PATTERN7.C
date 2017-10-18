/*

1
3*2
4*5*6
10*9*8*7


*/

#include<stdio.h>
#include<conio.h>
void main()
	{
	int l,k,num,n,i,j;
	clrscr();
	scanf("%d",&n);
	num=1;
	l=1;
	k=num;
	for(i=1;i<=n;i++)
		{
		k=num-1;
		for(j=1;j<=num;j++)
			{
			if(j%2==0)
				{
				printf("*");
				}
			else if(i%2==0)
				{
				printf("%d",k+l-num+i);
				l++;
				k=k-2;
				}
			else
				{
				printf("%d",l++);
				}
			}
		num=num+2;
		printf("\n");
		}
	getch();
}