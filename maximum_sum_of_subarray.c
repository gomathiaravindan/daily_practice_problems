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
