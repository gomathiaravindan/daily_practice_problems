#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,min = 99999,window_size,*arr,min_max[40],k = 0,max = 0;
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	
	arr = (int*)malloc(n*sizeof(int));
	
	for(i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the window size:");
	scanf("%d",&window_size);
	
	for(i = 0;i<n-window_size+1;i++)
	{
		min = 99999;
		for(j = i;j<i + window_size;j++)
		{
			if(min > arr[j])
			{
				min = arr[j];
			}
		}
		min_max[k++] = min;
	}
	
	for(i = 0;i<k;i++)
	{
		if(max < min_max[i])
		{
			max = min_max[i];
		}
	}
	printf("%d",max);
	free(arr);
	return 0;
}
