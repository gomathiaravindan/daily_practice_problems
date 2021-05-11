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
