#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,s,m,n,*arr,flag = 0,flag_1=0,flag_2=0,ind = -1;
	scanf("%d",&s);
	arr = (int*)malloc(s*sizeof(int));
	
	for(i  = 0;i<s;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter m and n:");
	scanf("%d %d",&m,&n);
	
	printf("{");
	for(i = 0;i<s;i++)
	{
		if(arr[i] > n)
		{
			printf("%d,",arr[i]);
		}
		
	}
	
	for(i = 0;i<s;i++)
	{
		if(arr[i] >= m && arr[i] <= n)
		{
			printf("%d,",arr[i]);
		}
		
	}
	for(i = 0;i<s;i++)
	{
		if(arr[i] < m)
		{
			printf("%d,",arr[i]);
		}
	}
	printf("}");
	free(arr);
	return 0;
}
