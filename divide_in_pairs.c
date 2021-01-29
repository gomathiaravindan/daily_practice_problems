#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j = 0,n;
	scanf("%d",&n);
	int arr[n],res[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<=n-1;i++)
	{
		if(arr[i]%arr[i-1] == 0 || arr[i-1]%arr[i]==0)
		{
			res[j] = arr[i-1];
			j++;
			res[j] = arr[i];
		}
		
	}
  	
  	for(i=0;i<=j;i++)
  		printf("%d ",res[i]);
  }
  
