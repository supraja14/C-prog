/*To print the pattern

1
22
333
4444
55555
4444
333
22
1

*/
#include<stdio.h>
#include<conio.h>
int main()
	{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
		{
		for(j=1;j<=i;j++)
			{
			printf("%d",i);
			}
		printf("\n");
		}
	for(i=4;i>=0;i--)
		{
		for(j=1;j<=i;j++)
			{
			//if(j<i)
			printf("%d",i);

			}
		printf("\n");
		}
	getch();
	}