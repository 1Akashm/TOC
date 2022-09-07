//5. Construct a DFA over {0,1} that accepts a set of strings with '011' as a substring. 

#include <stdio.h>
#include <string.h>
#define max 100

void checkValidDFA(char s[max] )
{
	int i;
	int initial_state = 0;
	int previous_state = initial_state;
	int final_state;
	
	for( i = 0; i < strlen(s); i++)
	{	
	if((previous_state == 0 && s[i] == '0') ||
	(previous_state == 1 && s[i] == '0')||(previous_state == 2 && s[i]=='0'))
	{
		final_state = 1;
	}
	if(previous_state == 0 && s[i] == '1')
	{
		final_state = 0;
	}
	if(previous_state == 1 && s[i] == '1')
	{
		final_state = 2;
	}
	if((previous_state == 2 && s[i] == '1') || (previous_state == 3))
	{
		final_state = 3;
	}
		previous_state = final_state;
	}

	if(final_state == 3)
	{
		printf("Accepted");
	}
	else
	{
		printf("Not Accepted");
	}
}

int main()
{
    char c;
    char s[max];
    do
    {
	printf("Enter the string : ");
	scanf("%s",s);
	checkValidDFA(s);
	printf("\nDo you want to continue ? ");
	scanf("%s",&c);
    }
    while(c=='y');
    return 0;
}

