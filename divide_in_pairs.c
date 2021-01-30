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
	
	for(i = 0,j=i+1;i<n,j<=n-1;)
	{
		
		 if(j==n-1)
		{
		
			 if(arr[i]%arr[j] == 0 || arr[j]%arr[i]==0)
			{
				res[k] = arr[i];
				k++;
				res[k] = arr[j];
			}
			i++;
			j=0;
			j = i+1;
		}
		else if(arr[i]%arr[j] == 0 || arr[j]%arr[i]==0)
		{
			res[k] = arr[i];
			k++;
			res[k] = arr[j];
			i++;
			j++;
		}
		
		else if(arr[i]%arr[j] != 0 || arr[j]%arr[i]!=0)
			j++;
	}
  	
  	for(i=0;i<=k;i++)
  		printf("%d ",res[i]);
  }
  
