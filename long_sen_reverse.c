#include<stdio.h>
#include<string.h>
int main()
{
	char str[200],temp;
	int i,j;
	gets(str);
	
	for(i=0,j=strlen(str)-1;i<j;)
	{
	
		if(!(((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) || (str[i] >= '0' && str[i] <= '9')))
		{
			i++;
		}
		else if(!(((str[j] >= 'a' && str[j] <= 'z') || (str[j] >= 'A' && str[j] <= 'Z')) || (str[j] >= '0' && str[j] <= '9')))
		{
			j--;
		}
		else
		{
			temp = str[i];
			str[i] = str[j];
			str[j] = temp;
			i++;
			j--;
		}
	}
	
	printf("%s",str);
}
