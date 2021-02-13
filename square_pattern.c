#include<stdio.h>
int main()
{
	int n,i,j,temp,temp1;
	scanf("%d",&n);
	temp = n;
	temp1 = n;
	for(i=0;i<n;i++)
	{
		temp = n;
		for(j=0;j<n;j++)
		{
			if(i==0)
			{
				printf("%d ",temp);
			}
			
			else 
			{
			
				
				 if(i<=j)
				{
					printf("%d ",temp1 - i);
				}
				else
				{
					printf("%d ",temp);
					temp--;
				}
		}
		
		
	}
	printf("\n");
}
}
