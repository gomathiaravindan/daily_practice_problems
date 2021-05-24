## Given an unsorted array of integers, sort the array into wave like array. An array 'arr[0...n-1]' is sorted in wave for if arr[0]>=arr[1]<=arr[2]>=arr[3]<=arr[4]...
Sample Case: Input arr[] = {10, 5, 6, 3, 2, 20, 100, 80}
Output: {10, 5, 6, 3, 20, 2, 100, 80}






#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,k,*arr;
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	arr = (int*)malloc(n*sizeof(int));
	
	for(i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i = 0,j = 1;i,j<n;)
	{
		if((arr[i] >= arr[j]) && (arr[j] <= arr[j+1]))
		{
			i+=2;
			j+=2;
		}
		else if(!(arr[i] >= arr[j]))
		{
			arr[i] = arr[i] ^ arr[j];
			arr[j] = arr[j] ^ arr[i];
			arr[i] = arr[j] ^ arr[i];
			i+=2;
			j+=2;
		}
		else if(!(arr[j] <= arr[j+1]))
		{
			for(k = j+1;k<n;k++)
			{
				if(arr[j+1] < arr[k])
					break;
			}
			arr[j+1] = arr[j+1] ^ arr[k];
			arr[k] = arr[j+1] ^ arr[k];
			arr[j+1] = arr[j+1] ^ arr[k];
			i+=2;
			j+=2;
		}
		
	}
	
	for(i = 0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	free(arr);
	return 0;
}
