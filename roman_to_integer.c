## Print the integer for the given roman numerals.
Sample Case: Input: MMMDXLIX
Output: 3549





#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int number[9] = {1,5,10,50,100,500,1000},i,j,integer[40],k = 0,sum = 0;
	char roman[9] = {'I','V','X','L','C','D','M'},input_string[30];
	
	printf("Enter the roman numberal:");
	gets(input_string);
	
	for(i = 0;i<strlen(input_string);i++)
	{
		for(j = 0;j<9;j++)
		{
			if(input_string[i] == roman[j])
			{
				integer[k++] = number[j];
				break;
			}
		}
	}
	
	/*for(i = 0;i<k;i++)
	{
		printf("%d ",integer[i]);
	}*/
	for(i = 0;i<k;)
	{
		
		if(integer[i] >= integer[i+1])
		{
			sum = sum + integer[i];
		
		}
		if(integer[i] < integer[i+1])
		{
			sum = sum + (integer[i+1] - integer[i]);
			i++;
		}
		i++;
	}
	
	printf("%d ",sum);
	
	return 0;
}
