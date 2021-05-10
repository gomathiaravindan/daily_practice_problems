#include<stdio.h>
#include<string.h>
int main()
{
	int i,ind,flag = 1,count = 0,e_flag = 0,dot_count = 0,ind1;
	char s[30];
	printf("Enter a string:");
	gets(s);
	
	for(i =0;i<strlen(s);i++)
	{
		if(s[i]>='0' && s[i] <= '9')
		{
			continue;
		}
		
		else if(s[i]== 'e')
		{
			ind = i;
			e_flag = 1;
			count++;
		}
		else if(s[i] == '.')
		{
			dot_count++;
			ind = i;
		}
		else
		{
			flag = 0;
			break;
		}
	}
	
	if(flag == 0)
	{
		printf("false");
	}
	
	else
	{
		if(e_flag == 1 && (ind != 0 && ind!= strlen(s)-1))
		{
		  if(count == 1)
		{
			printf("true");
		}
		else
		{
			printf("false");
		}
		
		}
		else if(dot_count == 1 && (ind != 0 && ind!= strlen(s)-1))
		{
			printf("true");
		}
		else
		{
			printf("true");
		}
	}
}
