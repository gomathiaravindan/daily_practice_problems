#include<stdio.h>
#include<string.h>
int sum = 0;
int main()
{
	int len,i = 0;
	char str[30];
	gets(str);
	
	
	tostring(str,i);
	
	return 0;
}


int tostring(char *s,int i)
{

	if(s[i]!='\0')
	{
		sum = sum * 10 + (s[i] - '0');
		i++;
	}
	else
		{
			printf("%d",sum);
			return 0;
		}
	tostring(s,i);
		
}



