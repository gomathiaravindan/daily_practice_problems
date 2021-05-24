#include<stdio.h>
#include<string.h>
int main()
{
	char s[30];
	int i,j;
	char temp;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		for(j = i+1;j<strlen(s);j++)
		{
			if(tolower(s[i]) - 'a' > (tolower(s[j]) - 'a'))
			{
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	printf("%s",s);
}
