#include<stdio.h>
int main()
{
	int i,n,j,*arr,pos;
	
	scanf("%d",&n);
	
	arr = (int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	 printf("Enter the postion to split the array:");
	 scanf("%d",&pos);
	 
	 for(i = pos - 1,j = n-1;i >= 0;i--,j--)
	 {
	 	arr[i] = arr[i] ^ arr[j];
	 	arr[j] = arr[j] ^ arr[i];
	 	arr[i] = arr[i] ^ arr[j];
	 }
	 
	 for(i=0;i<n;i++)
	 {
	 	printf("%d ",arr[i]);
	 }
}
