/*

1
2*3
4*5*6
7*8*9*10


*/


#include<stdio.h>
#include<conio.h>
void main()
	{
	int l,k,num,n,i,j;
	clrscr();
	n=5;
	num=1;
	l=1;
	k=num;
	for(j=1;j<=n;j++)
		{
		k=num-1;
		for(i=1;i<=num;i++)
			{
			if(i%2==0)
				{
				printf("*");
				}
			else if(j%2==0)
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

			num=n;
			l=n;
			k=num;
			for(j=n;j>=1;j--)
		{
/*		k=num-1;
		for(i=num;i>=1;i--)
			{
			if(i%2==0)
				{
				printf("*");
				}
			else if(j%2==0)
				{
				printf("%d",k-l+num-j);
				l--;
				k=k+2;
				}
			else
				{
				printf("%d",l--);
				}
			}
		num=num-2;
		printf("\n");


			*/
			}
	getch();
}