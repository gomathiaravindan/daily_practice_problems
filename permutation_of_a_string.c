## Print all the permutation of a string

Sample Case: Input str = "ABC"
Output:
 ABC
 ACB
 BAC
 BCA
 CAB
 CBA








#include<stdio.h>
#include<string.h>

void permutation(char *, int,int);
int main()
{
	char str[40];
	int len,left,right;
	
	gets(str);
	
	len = strlen(str);
	left = 0, right = len - 1;
	
	permutation(str,left,right);
}

void permutation(char *str, int left, int right)
{
	int i;
	char temp;
	
	if(left == right)
	{
		printf("%s\n",str);
	}
	
	else
	{
		for(i = left;i<=right;i++)
		{
			temp = str[left];
			str[left] = str[i];
			str[i] = temp;
			permutation(str, left+1,right);
			temp = str[left];
			str[left] = str[i];
			str[i] = temp;
		}
	}
}
