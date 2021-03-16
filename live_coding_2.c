#include<stdio.h>
int main()
{
	int n,i,j,max = 0,max1 = 0,ind;
	
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(max < arr[i])
		{
			max = arr[i];
			ind = i;
		}
	}
	
	for(i = 0;i<n;i++)
	{
		if(arr[i] > max1 && i!=ind)
		{
			max1 = arr[i];
		}
	}
	printf("%d",max ^ max1);
}
