//1.  Construct DFA over {a,b} that accepts the strings ending with abb.
#include<stdio.h>
#include<stdlib.h>
#define max 100

int main()
{
	char str[max];
	char c;
	int i;
	int f ='1';
	printf("the initial states are : q0 =1 ,q1 = 2,q2 = 3 ");
	printf("\nthe final state is : q3 = 4 ");
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
					f='4';
				}
				break;
			case '4':
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
	if(f=='4')
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
