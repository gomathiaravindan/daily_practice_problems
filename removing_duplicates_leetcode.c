#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,*arr,count = 1,temp,ind = 0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	
	arr = (int*)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i = 0,j = 1;i,j<n;i++,j++)
	{
		if(arr[i] != arr[j])
		{
			count++;
		}
	}
	
		
	for(i = 0;i<n;i++)
	{
		for(j =ind+1;j<n;j++)
		{
			if(arr[i]==arr[j])
				continue;
			else if(arr[i]!=arr[j])
			{
				ind = j;
				temp = arr[i];
				arr[i+1] = arr[j];
				arr[j] = temp;
				break;
			}
		}
		
	}
	
	for(i = 0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	free(arr);
	return 0;
}
