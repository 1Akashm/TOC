//4. Construct a DFA over {0,1} that accepts a set of all strings ending with '00'. 

#include<stdio.h>
#include<stdlib.h>
#define max 100
		
int main()
{
	char str[max];
	char c;
	int i;
	char f ='a';
	do
	{
	printf("\nEnter the string :");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		switch(f)
		{
			case 'a':
				if (str[i]=='0')
				{
					f='b';
				}
				else if(str[i]=='1')
				{
					f='a';
				}
				break;
			case 'b':
				if (str[i]=='0')
				{
					f='c';
				}
				else if(str[i]=='1')
				{
					f='a';
				}
				break;
			case 'c':
				if(str[i]=='0')
				{
					f='c';
				}
				else if(str[i]=='1')
				{
					f='a';
				}
				break;
		}
	}
	if(f=='c')
	{
		printf("string is accepted",f);
		
	}
	else
	{
		printf("string is not accepted",f);
	}
	printf("\nDo you want to continue ? ");
	scanf("%s",&c);
}
	while(c=='y'||c=='Y');
	return 0;
}

