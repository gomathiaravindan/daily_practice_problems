## Given a string containing 0's and 1's, find the total number of 0(1+)0 patterns in the string and output it.
Sample Case: Input: 0110111010
Output: 3





#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	int i,j,count = 0;
	printf("Enter the binary string:");
	gets(str);
	
	for(i = 0,j = 1;i,j<strlen(str);)
	{
		if(str[i] == '0' && str[j] == '0')
		{
			count++;
			
			i = j;
			j = j + 1;
		}
		else if(str[j] == '1')
		{
			j++;
		}
	}
	printf("%d",count);
	
	return 0;
}
