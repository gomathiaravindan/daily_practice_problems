## Given a word, you need to judge whether the usage of capitals in it is as follows.
## All letters in this word are capitals. (Or)
## All letters in this word are not captials, like "hello". (Or)
## Only first letter is captial.
Sample Case: Input GooGle
Output False








#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	int i,ind,upper=0,lower=0,upper_first = 0;
	
	gets(str);
	
	
		
	for(i =1;i<=strlen(str)-1;i++)
	{
		
		 if(str[i] >= 'a' && str[i] <= 'z')
		{
			lower++;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			upper++;
		}
	   
	}
	if(str[0] >= 'A' && str[i] <= 'Z' && upper == strlen(str) - 1)
		upper++;
	
	else if(str[0] >= 'a' && str[0] <= 'z' && lower == strlen(str) - 1)
		lower++;
	else
		upper_first = 1;
	
	if(strlen(str) == upper || strlen(str) == lower || (upper_first == 1 && lower == strlen(str)-1))
		printf("True");
	else
		printf("False");
}
