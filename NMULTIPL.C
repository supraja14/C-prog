#include<stdio.h>
#include<conio.h>

void main()
	{
	int n,x,i,a=1;
	scanf("%d",&n);
	scanf("%d",&x);

	       do
		{
			if((a*n)%x==0)
				{
					printf("%d ",(a*n));
					break;
				}
			else
				{
					printf("%d ",(a*n));
				}
			a++;
		}while(1);
		getch();
	    }