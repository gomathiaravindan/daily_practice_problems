#include<stdio.h>
int main()
{
	int n,rem,sum = 0,temp;
	scanf("%d",&n);
	temp = n;
	while(temp!=0)
	{
		sum = sum * 10 + temp % 10;
		temp/=10;
	}
	if(sum == n)
	{
		printf("The number is palindrome!!");
	}
	else
		printf("Not a palindrome!!");
}
