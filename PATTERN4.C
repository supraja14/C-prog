/* Print the following pattern
	* * * * *
	  * * * *
	    * * *
	      * *
		*
*/
#include<stdio.h>
#include<conio.h>
	void main()
		{
		int i,j,k;
		clrscr();
		for(i=5;i>=0;i--)
			{
			for(k=0;k<=5-i;k++)
				{
				printf(" ");
				}
			for(j=i;j>=0;j--)
				{
				printf("*");
				}
			printf("\n");
			}
		getch();
		}