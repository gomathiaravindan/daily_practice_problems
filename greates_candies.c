#include<stdio.h>
int main()
{
	int n,i,j,max =0,count=0,extra;
	
	scanf("%d",&n);
	
	int candies[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&candies[i]);
		if(max < candies[i])
		{
			max = candies[i];
		}
	}
	
	printf("Enter the extra candies: ");
	scanf("%d",&extra);
	
	for(i=0;i<n;i++)
	{
		if((candies[i] + extra) >= max)
		{
			printf("true ");
		}
		else{
			printf("false ");
		}
	}
	
}
