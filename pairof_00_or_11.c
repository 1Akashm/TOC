#include<stdio.h>
#include<string.h>
#include<conio.h>
#define max 100


void main()
{
	char f='a',ch,str[max];
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
					if(str[i]=='0')
					{
						f='b';
					}
					
					else if(str[i]=='1')
					{
						f='c';
					}
					break;
					
				case 'b':
					if(str[i]=='0')
					{
						f='d';
					}
					
					else if(str[i]=='1')
					{
						f='a';
					}
					break;
					
				case 'c':
					if(str[i]=='0')
					{
						f='a';
					}
					
					else if(str[i]=='1')
					{
						f='d';
					}
					break;
					
				case 'd':
					if(str[i]=='1' || str[i]=='0')
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
	
}
