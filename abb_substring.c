#include<stdio.h>
#include<string.h>
#include<conio.h>
#define max 100


void main()
{
	char str[max],f='a',ch;
	int i;
	
	do
	{
		printf("Enter the string :\n");
		scanf("%s",&str);
		
	for(i=0;str[i]!='\0';i++)
	{
		switch(f)
		{
			case 'a':
				if(str[i]=='a')
				{
					f='b';
				}
				
				else if(str[i]=='b')
				{
					f='a';
				}
				break;
			
			case 'b':
				if(str[i]=='a')
				{
					f='b';
				}
				
				else if(str[i]=='b')
				{
					f='c';
				}
				break;
				
			case 'c':
				if(str[i]=='a')
				{
					f='b';
				}
				
				else if(str[i]=='b')
				{
					f='d';
				}
				break;
				
			case 'd':
				if(str[i]=='a' || str[i]=='b')
				{
					f='d';
				}
				break;
				
			default:
				break;
		}
	}
	
		if(f=='d')
	{
		printf("\nstring %s is accepted",str);
	}
	
	else
	{
		printf("\nstring %s isnot accepted",str);
	}
	
	printf("\nDo you want to continue(Y/N):");
	scanf(" %c", &ch);
	}
	
	while(ch=='Y' || ch=='y');
	

	
	getch();
}
