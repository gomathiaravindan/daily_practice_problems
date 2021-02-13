Sample Case: Input: 5
Output:



5 5 5 5 5
5 4 4 4 4
5 5 3 3 3
5 5 4 2 2
5 5 4 3 1




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
