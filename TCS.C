#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
	{
	int a ,b;
		if(argc<2)
			{
			printf("0");
			exit(0);
			}
		 a=atoi(argv[1]);
		b=atoi(argv[2]);

		printf("%d",(a%10)+(b%10));
		return 0;
	}
