#include<stdio.h>
#include<string.h>
int main()
{
	char s[40];
	int i,j;
	gets(s);
	for(i=0,j=strlen(s) - 1;i<j;)
	{
		if(((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) && ((s[j] >= 'a' && s[j] <= 'z') || s[j] >= 'A' && s[j] <= 'Z'))
		{
			s[i] = s[i] ^ s[j];
			s[j] = s[j] ^ s[i];
			s[i] = s[i] ^ s[j];
			i++;
			j--;
		}
		else if(s[i] == ' ')
		{
			i++;
		}
		else 
		{
			j--;
		}
	}
	
	printf("%s",s);
	
}
