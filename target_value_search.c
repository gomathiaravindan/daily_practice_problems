## Given a sorted array of distinct integers and a target value, return the index if the target is found. If the target is not found, then return the index where the target is to be inserted.
Sample Case: Input = [1,3,5,6], target = 5
Output: 2
Input = [1,3,5,6], target = 2
Output: 1





#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,*arr,*freq,max = 0,ind = 0,target,flag = 0;
	
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	
	arr = (int*)malloc(sizeof(int)*n);
	
	for(i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(max <= arr[i])
		{
			max = arr[i];
		}
	}
	
	freq = (int*)calloc(max+1,sizeof(int));
	
	for(i = 0;i<n;i++)
	{
		freq[arr[i]] = 1;
	}
	
	printf("Enter the target value to search:");
	scanf("%d",&target);
	
	if(freq[target] == 1)
	{
		for(i = 0;i<n;i++)
		{
			if(arr[i] == target)
			{
		    	printf("%d",i);
		    	break;
		    }
		} 
	}
	else
	{
		max = target;
		for(i = 0;i<n;i++)
		{
			if(arr[i] > max)
			{
				ind = i;
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			printf("%d",n-1);
		}
		else
		{
			printf("%d",ind);
		}
	}
	return 0;
}
