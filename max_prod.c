#include<stdio.h>
int main()
{
	int n,i,j,k,max=0,l=1;
	scanf("%d",&n);
	int arr[n];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n-2;i++)
	{
		for(j=i+1;j<n;j++)
		{
		
			for(k=n;k>j;k--)
			{
			
				if((arr[i]*arr[j]*arr[k]) > max)
				{
					max = arr[i]*arr[j]*arr[k];
					
				}
		  }
	}
	
	}
	printf("%d",max);
}
