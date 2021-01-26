#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],s1[100];
	int i,j,count=0;
	gets(s);
	gets(s1);
	if(strlen(s) >= strlen(s1))
	{
	
		for(i = strlen(s)-1,j=strlen(s1)-1; i>=0;)
		{
			if(s[i]==s1[j])
			{
				i--;
				j--;
			}
			else if(s[i]!=s1[j])
			{
				count++;
				i--;
			}
		}
	}
	if(count == 1)
   		printf("true");
   	else
   		printf("false");
}
