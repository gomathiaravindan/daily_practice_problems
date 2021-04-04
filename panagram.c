## program to check whether a String is a Pangram or not. A string is a Pangram if the string contains all the English alphabet letters.
Sample input: "The quick brown fox jumps over a lazy dog".
Output : true

Sample input: "The quick brown fox jumps".
output : false







#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,count = 0,len;
	char str[50];
	
	gets(str);
	//scanf("%d",&n);
	
	len = strlen(str);
	int letters[26];
	
	for(i=0;i<27;i++)
	{
		letters['a' + i] = 0;
	}
	
	
	
	printf("==========\n");
	for(i=0;i<len;i++)
	{
		letters[tolower(str[i])] = 1;
	}
	
	for(i=0;i<26;i++)
	{
		printf("%c: %d\n",'a' + i, letters['a' + i]);
	}
	
	for(i=0;i<26;i++)
	{
		if(letters['a' + i] == 1)
		{
			count++;
		}
	}
	
	if(count == 26)
	{
		printf("true");
	}
	
	else
	{
		printf("false");
	}
	return 0;
}
