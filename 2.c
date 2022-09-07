//2. Construct DFA over {a,b} accepting strings that do not end with ab. 

#include<stdio.h>
#include<stdlib.h>
#define max 100

int main()
{
	char str[max];
	char c;
	int i;
	char f ='1';
	do
	{
	printf("\nEnter the string :");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		switch(f)
		{
			case '1':
				if (str[i]=='a')
				{
					f='2';
				}
				else if(str[i]=='b')
				{
					f='1';
				}
				break;
			case '2':
				if (str[i]=='a')
				{
					f='2';
				}
				else if(str[i]=='b')
				{
					f='3';
				}
				break;
			case '3':
				if(str[i]=='a')
				{
					f='2';
				}
				else if(str[i]=='b')
				{
					f='1';
				}
				break;
		}
	}
	if(f=='1'|| f=='2')
	{
		printf("string is accepted",f );
		
	}
	else
	{
		printf("string is not accepted",f);
	}
	printf("\nDo you want to continue ? ");
	scanf("%s",&c);
	f='1';
}
	while(c=='y'||c=='Y');
	return 0;
}

