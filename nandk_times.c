#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,max = 0,n,k,*freq,*arr;
	
	printf("Enter the total no of elements:");
	scanf("%d",&n);
	
	arr = (int*)malloc(n*sizeof(int));
	
	for(i = 0;i<n;i++)
	{
		scanf("%d",arr + i);
		if(max < arr[i])
			max = arr[i];
	}
	
	freq = (int*)calloc(max+1,sizeof(int));
	
	for(i = 0;i<n;i++)
	{
		freq[arr[i]]++;
	}
	printf("Enter the element k:");
	scanf("%d",&k);
	
	printf("[");
	for(i = 0;i<max+1;i++)
	{
		freq[i] > (n/k) ? printf("%d ",i) : 0;
	}
	printf("]");
	free(arr);
	free(freq);
	return 0;
}
