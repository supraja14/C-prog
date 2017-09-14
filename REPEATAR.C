/* Remove redundant elements from the array */

#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,k,j;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
		{
		if(i==j)
			{
			continue;
			}
		else if(a[i]==a[j])
			{
			k=j;
			n--;
			while(k<n)
				{
				a[k]=a[k+1];
				k++;
				}
			j=0;
			}
		}
	}
for(i=0;i<n;i++)
	{
	printf("%d  ",a[i]);
	}
getch();
}