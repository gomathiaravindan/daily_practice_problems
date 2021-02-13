#include<stdio.h>
int main()
{
	int n,sum = 0,prod = 1;
	scanf("%d",&n);
	
	while(n!=0)
	{
		sum += n%10;
		prod *= n%10;
		n/=10;
	}
	
	if(sum == prod)
	{
		printf("The given number is a spy number!!");
	}
	
	else
	{
		printf("The given number is not a spy number!!");
	}
}
