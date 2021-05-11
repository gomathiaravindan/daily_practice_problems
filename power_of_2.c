#include<stdio.h>
int main()
{
	int n,flag = 1;
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(n>1)
	{
		if((n%2)!=0)
		{
			flag = 0;
			break;
		}
		n = n/2;
		
	}
	
	if(flag==1)
		printf("Given number is the power of 2");
	else
		printf("Given number is not a power of 2");
	return 0;
}
