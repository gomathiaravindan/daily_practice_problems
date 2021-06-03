## Find the maximum sum of the subarray.
We define a k-subsequence of an array as follows:
1. It is a subsequence of consecutive elements in the array.
2. the sum of the subsequence;s elements s is evenly divisible by k (i.e s % k == 0)
Given an integer and input array, findout the number of  k-subsquences. 
Sample Case:  Input = [1 2 3 4 1], k = 3
Output: 4 ({1, 2},{1, 2, 3},{2, 3, 4},{3})





#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,sum = 0,count = 0,k,*arr;
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	
	arr= (int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the interger:");
	scanf("%d",&k);
	
	for(i = 0;i<n;i++)
	{
		if(arr[i] % k == 0) ++count;
		sum = arr[i];
		for(j = i+1;j<=n-1;j++)
		{
			sum +=arr[j];
			if(sum % k == 0) ++count;
		}
		
	}
	printf("%d",count);
	free(arr);
	return 0;
}
