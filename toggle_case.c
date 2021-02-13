Sample Case: Input: GomsA
Output: gOMSa




#include<stdio.h>
#include<string.h>
int main()
{
	char string[30];
	int i;
	gets(string);
	
	for(i=0;i<strlen(string);i++)
	{
		if(string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] = string[i] - 32;
		}
		else if(string[i] >= 'A' && string[i] <= 'Z')
		{
			string[i] = string[i] + 32;
		}
	}
	
	puts(string);
}
