## In a given array , find the missing integer.
Sample Case: Input = [1, 2, 4, 6, 3, 7, 8]
Output 5




#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,max =0,*arr,*occur;
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	
	arr = (int*)malloc(sizeof(int)*n);
	for(i = 1;i<=n;i++)
	{
		scanf("%d",arr + i);
		if(max < arr[i])
			max = arr[i];
	}
	
	occur = (int*)calloc(max-1,sizeof(int));
	
	for(i = 1;i<=n;i++)
	{
		occur[arr[i]] = 1;
	}
	
	for(i = 1;i<=n;i++)
	{
		if(occur[arr[i]+1] == 0)
		{
			printf("%d ",arr[i]+1);
		}
	}
	free(arr);
	free(occur);
	return 0;
}
