## Given an array of distinct integers in unsorted order. Print the rank for each element, the lowest element gets the highest rank.
Sample Case: Input arr[] = {10,  8, 15, 12, 6, 20, 1}
Output: {4, 3, 6, 5, 2, 7, 1}




#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,*arr,*rank;
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	
	arr = (int*)malloc(sizeof(int) * n);
	rank = (int*)malloc(sizeof(int) * n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
		rank[i] = arr[i];
	}
	
	for(i = 1;i<=n;i++)
	{
		for(j = 1;j<=n;j++)
		{
			if(arr[i] < arr[j])
			{
				arr[i] = arr[i] ^ arr[j];
				arr[j] = arr[j] ^ arr[i];
				arr[i] = arr[i] ^ arr[j];
			}
		}
	}
	
	for(i = 1;i<=n;i++)
	{
		for(j = 1;j<=n;j++)
		{
			if(arr[j] == rank[i])
			{
				printf("%d, ",j);
			}
		}
	}
	free(arr);
	free(rank);
	return 0;
}
