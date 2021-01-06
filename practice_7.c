#include<stdio.h>
#include<string.h>
int main()
{
	char s[30],temp;
	int i,j;
	gets(s);
	
	for(i=0,j=strlen(s)-1;i<j;)
	{
	
		if((s[i] >= 'a' && (s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z' )) && ((s[j] >= 'a' && s[j] <= 'z') ||   (s[j] >= 'A' && s[j] <= 'Z')))
		{
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			i++;
			j--;
		}
		else if((s[i] >= 'a' && (s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z' )))
		{
			
			j--;
		}
		else if((s[j] >= 'a' && s[j] <= 'z') ||   (s[j] >= 'A' && s[j] <= 'Z'))
		{
			
			i++;
		}
		else
		{
			i++;
			j--;
		}
	}
	
	
	for(i=0;i<strlen(s);i++)
	{
		printf("%c",s[i]);
	}
}
