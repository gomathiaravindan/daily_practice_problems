#include<stdio.h>
int main()
{
	int pennies = 1,nickels = 5, dimes = 10, pearl = 25,rupee,pen_count = 0,nickel_count = 0,dime_count = 0,pearl_count = 0,temp;
	printf("Enter a rupee:");
	scanf("%d",&rupee);
	 
	temp = rupee;
	while(temp > 0)
	{
		if(temp < nickels)
		{
			pen_count = temp/pennies;
			temp%=pennies;
		}
		else if(temp < dimes)
		{
			nickel_count = temp/nickels;
			temp%=nickels;
		}
		else if(temp < pearl)
		{
			dime_count = temp/dimes;
			temp%=dimes;
		}
		else if(temp > pearl)
		{
			pearl_count = temp/pearl;
			temp%=pearl;
		}
	}
	
	printf("%d pennies, %d nickels, %d dimes, and %d pearl coins are required.",pen_count,nickel_count,dime_count,pearl_count);
	return 0;
}
