#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,count = 0,*arr,val,temp;
	
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	
	arr = (int*)malloc(n*sizeof(int));
	
	for(i = 0;i<n;i++)
	{
		scanf("%d",&val);
		if(val == 0)
		{
			temp = arr[i-1];
			arr[i-1] = arr[count];
			arr[i] = temp;
			arr[count] = val;
			count++;
			
		}
		else if(val!=0)
		{
			arr[i] = val;
		}
	}
	
	for(i = 0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	free(arr);
	return 0;
}
