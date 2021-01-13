### Given a astring, check whether it is a plaindrome or not.
Sample Case: Input: race car
Output: Palindrome






#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int i,j;
	gets(s);
	for(i=0,j=strlen(s)-1;i<j;)
	{
		if(s[i]!=s[j])
		{
			if(s[i]== ' ')
			{
				i++;
			}
			else if(s[j]== ' ')
			{
				j--;
			}
			else
			{
				printf("Not a palindrome!!");
				exit(1);
			}
		}

		else if(s[i]==s[j])
		{
			i++;j--;
		}
	}
		printf("The given string is palindrome!!");
	
	
	
}
