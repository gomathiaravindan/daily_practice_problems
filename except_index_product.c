## You are given an array of integers. Return an array of the same size where the element at each index is the product of all the elements in the original array except for the element at that index. For example, an input of [1, 2, 3, 4, 5] should return [120, 60, 40, 30, 24].




#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,product= 1,*arr;
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	arr = (int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		scanf("%d",arr + i);
		product *= arr[i];
	}
	
	printf("[");
	for(i = 0;i<n;i++)
	{
		printf("%d ",product/arr[i]);
	}
	printf("]");
	
	free(arr);
	return 0;
}
