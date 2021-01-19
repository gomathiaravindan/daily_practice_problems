#include<stdio.h>
#include<math.h>
int main()
{
	int n,deci=0,count=0,rem;
	scanf("%d",&n);
	while(n!=0)
	{
	
		rem = n%10;
		deci+=rem * pow(2,count);
		count++;
			n/=10;
		}
	printf("The decimal number is:%d",deci);
}
