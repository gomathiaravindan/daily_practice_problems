#include<stdio.h>
#include<stdlib.h>
int main()

{
	int i,j,n,*arr;
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	arr = (int*)malloc(n*sizeof(int));
	
	for(i = 0;i<n;i++)
	{
		scanf("%d",arr + i);
	}
	
	for(i = 0,j = n-1;i <= j;)
	{
		if(arr[i] == arr[j])
		{
			printf("%d",arr[i]);
			break;
		}
		else if(arr[i]!= arr[j] && j == i+1)
		{
			j = n-1;
			i = i+1;			
		}
		else
		{
			j--;
		}
	}
	
	free(arr);
	return 0;
}
