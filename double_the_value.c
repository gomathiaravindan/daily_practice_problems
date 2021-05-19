#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,max = 0,n,*arr,*double_value,b,flag = 0;
	
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	
	arr = (int*)malloc(n*sizeof(int));
	
	for(i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(max <= arr[i])
		{
			max = arr[i];
		}
	}
	
	double_value = (int*)calloc(max*max,sizeof(int));
	
	printf("Enter the integer to search:");
	scanf("%d",&b);
	
	for(i = 0;i<n;i++)
	{
		double_value[arr[i]] = 1;
		double_value[arr[i] * arr[i]] = 1;
	}
	
	
	while(flag != 1)
	{
		
		if(double_value[b] == 1)
		{
			b = b * 2;
			
		}
		else
		{
			flag = 1;
		}
	}
	
	printf("%d ",b);
	free(arr);
	free(double_value);
	return 0;
}
