## Reverse the bits of an 32 bit unsigned integer A.

#include<stdio.h>
int main()
{
	int n,rem,sum=0,i;
	printf("Enter a decimal value:");
	scanf("%d",&n);
	printf("The reversed binary value is:");
	for(i=0;i<=32;i++)
	{
		rem=n>>i;
		(rem&1)?printf("1"):printf("0");
	}

}
