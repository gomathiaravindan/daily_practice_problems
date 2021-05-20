#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,count = 0,max = 0,*arr,res[20],k = 0;
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	
	arr = (int*)malloc(n*sizeof(int));
	
	for(i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i = 0;i<n;)
	{
		if(abs(arr[i] - arr[i+1] ==0) || abs(arr[i+1] - arr[i] ==0) || abs(arr[i] - arr[i+1] == 1 ) || abs(arr[i+1] - arr[i] == 1 ))
		{
			count+=2;
			if(res[k-1] != arr[i])
			   res[k++] = arr[i];
			if(res[k-1] != arr[i+1])
				res[k++] = arr[i+1];
			i++;
		}
		else
		{
			i++;
		}
	}
	
	for(i = 0;i<k;i++)
	{
		printf("%d ",res[i]);
	}
	printf("\n%d",k);
}
