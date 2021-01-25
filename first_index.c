#include<stdio.h>
int main()
{
	int n,i,j=0;
	scanf("%d",&n);
	int *arr = (int*)malloc(n*sizeof(int));
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]==1)
		{
			if(j==0 && i==0)
			{
				j = i;
			}
			else if(j==0)
			{
				j = i;
			}
		}
	}
	printf("The first occurance of 1 is:%d",j);
}
