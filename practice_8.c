### Find the second maximum element in the array.
Sample Case: Input: 4 5 6 2 4
Output: 5





#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int *arr = (int*)calloc(n,sizeof(int));
	for(i = 0;i< n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j = i+1;j <=n-1;j++)
		{
			if(arr[i] < arr[j])
			{
				arr[i] = arr[i] + arr[j];
				arr[j] = arr[i] - arr[j];
				arr[i] = arr[i] - arr[j];
			}
		}
	}
	
	
		printf("%d ",arr[1]);
		
	
}
