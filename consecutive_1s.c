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
