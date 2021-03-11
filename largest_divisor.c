#include<stdio.h>
int main()
{
	 long int n,i,j,t,k,l,max = 0,sum =0;
	
	scanf("%ld",&t);
	
	for(l = 0;l<t;)
	{
		sum = 0;
		scanf("%ld %ld",&n,&k);
		for(i = 1 ;i<= n;i++)
	{
		max = 0;
		for(j = 1 ;j<= i;j++)
		{
			if(i % j == 0 && j % k!=0)
			{
			
				max = j;

			}
		}
		sum+=max;
	}
	printf("%ld",sum);
	l++;
	}
	
	
}
