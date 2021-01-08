#include<stdio.h>
int main()
{
	int n,i,j,max=0;
	scanf("%d",&n);
	int *arr = (int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(max < arr[i])
		{
			max = arr[i];
		}
		
	}
	int *freq = (int*)calloc(max+1,sizeof(int));
	for(i=0;i<n;i++)
	{
		freq[arr[i]]++;
	}
	for(i=0;i<n;i++)
	{
		if(freq[arr[i]]==1)
		{
			printf("%d",arr[i]);
		}
	}
}
