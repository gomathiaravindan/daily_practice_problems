#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],res[30],*ch1 , *ch2;
	
	int i,j,sum = 0;
	
	gets(str);
	
	if(str[strlen(str) - 1] == 'M' && str[strlen(str) - 2] == 'A')
	{
		for(i = 0;str[i]!= ':';i++)
		{
			sum = sum * 10 + (str[i] - '0');
		}
		
		if(sum == 12)
		{
			for(i=0;str[i]!=':';i++)
			{
				if(i == 0)
					str[i] = '2';
					
				else
					str[i] = '4';
			}
			for(i =0;i<strlen(str)-2;i++)
			{
				printf("%c",str[i]);
			}
	
		}
		
		if(sum >= 1 && sum <= 11)
		{
			for(i =0;i<strlen(str)-2;i++)
			{
				printf("%c",str[i]);
			}
		}
	}
	
	else if(str[strlen(str) - 1] == 'M' && str[strlen(str) - 2] == 'P')
	{
		for(i = 0;str[i]!= ':';i++)
		{
			sum = sum * 10 + (str[i] - '0');
		}
		
		if(sum == 12)
		{
			printf("%s",str);
		}
		
		if(sum >= 1 && sum <= 11)
		{
			sum = sum+12;
			
			printf("%d",sum);
			
			for(i = 1;i<strlen(str) - 2;i++)
			{
				printf("%c",str[i]);
			}
			
		}
	}
	
	}
