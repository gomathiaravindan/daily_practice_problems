#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	gets(str);
	int i,j,swap = 0;
	
	for(i = 0, j = strlen(str) - 1;i<j;)
	{
		 if(str[i] == '#' && str[j] == '#')
		{
			i++;
			j--;
		}
		else if((str[i] == 'B') && (str[j] == '#'))
		{
			swap++;
			break;
			i++;
			j--;
		}
		else if(str[i] == '#' && str[j] == 'A')
		{
			swap++;
			break;
			i++;
			j--;
		}
		else if(str[i] == 'B' && str[j] == 'A')
		{
			i++;
			
		}
		else if(str[i] == str[j])
		{
			i++;
			j--;
		}
		else if(str[i] == '#' && str[j] == 'B')
		{
			i++;
			j--;
		}
	}
	if(swap>0)
	{
		printf("Yes");
	}
	else
		printf("No");
	
}
