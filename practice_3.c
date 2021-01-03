### Find the index of first non-repeating character in a given string
Sample case: leetcode 
Output: 0


#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int j,i,flag=0;
	int *letter;
	letter = (int*) calloc(26, sizeof(int));
	gets(s);
	
	for(i=0;s[i]!='\0';i++)
	{
		letter[s[i] - 'a']++;
	}
	
	for(i=0;s[i]!='\0';i++)
	{
		if(letter[s[i] - 'a'] == 1)
		{
			printf("%d",i);
			flag=1;
			break;
		}
		else
			flag=0;
		
	}
	if(flag==0)
	{
		printf("-1");
	}
	
}
