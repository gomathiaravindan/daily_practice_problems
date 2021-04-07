#include<stdio.h>
#include<string.h>
int main()
{
	char number[30];
	int i,j,mid,count =0;
	gets(number);
	
	
	
	for(i=0;i<strlen(number);i++)
	{
		if(number[i] == '9')
			count++;
	}
	
	char result[strlen(number)+2];

	if(count == strlen(number))
	{
		result[0] = '1';
		for(i=1;i<=strlen(number)-1;i++)
		{
			result[i] = '0';
		}
		result[i] = '1';
		printf("%s",result);
	}
	else
	{
	
	for(i=0,j=strlen(number)-1;i<j;i++,j--)
	{
		number[j] = number[i];
	}
	if(strlen(number) % 2 == 0)
	{
	
		number[i] = number[i] + 1;
		number[j] = number[j] + 1;
	}
	else
	{
		number[j] = number[j] + 1;
	}
	printf("%s",number);
}
	
}
