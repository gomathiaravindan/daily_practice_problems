## Print each word in the new line of the string
Sample Case: Input I love India
Output 
I 
Love
India





#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int i;
	
	gets(s);
	
	for(i=0;i<strlen(s);i++)
	{
		if(!(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'))
		{
			printf("\n");
		}
		else
		{
			printf("%c",s[i]);
		}
	}
}
