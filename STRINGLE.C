#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
	{
	char s[100],word,max,min;
	int i,j,flag;
	for(i=0;i<strlen(s);i++)
		{
		while(i<strlen(s) && !isspace(s[i]))
			{
			word[j++]=s[i++];
			}
		if(j!=0)
			{
			word[j]='\0';
			if(!flag)
				{
				flag=!flag;
				strcpy(max,word);
				strcpy(min,word);
				}
			if(strlen(word)>strlen(max))
				{
				strcpy(max,word);
				}
			if(strlen(word)<strlen(min))
				{
				strcpy(min,word);
				}
			}
		}
	printf("%d",max);
	printf("%d",min);
	getch();
	}