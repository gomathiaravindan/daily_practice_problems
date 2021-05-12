#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,k,*arr,sum = 0;
	
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	
	arr = (int*)malloc(n*sizeof(int));
	
	for(i = 0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	printf("[");
	for(i = 0;i<n;i++)
	{
		
		for(j= i + 1;j<n;j++)
		{
			for(k = j+1;k<n;k++)
			{
				if(arr[i] + arr[j] + arr[k] == 0)
				{
					printf("[%d %d %d]",arr[i],arr[j],arr[k]);
				}
			}
		}
	}
	free(arr);
	free(arr);
	return 0;
}
