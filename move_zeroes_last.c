#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,*arr,val;
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	arr = (int*)malloc(sizeof(int)*n);
	for(i = 0,j = n-1;i<=j;)
	{
		scanf("%d",&val);
		if(val == 0)
		{
			arr[j--] = val;
		}
		else
		{
			arr[i++] = val;
		}
	}
	
	for(i = 0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	free(arr);
	return 0;
}

