## Given an array of integers and two integers m and n. Print the array in the following order
1. All elements greater than n should be printed first
2. All elements between the range of m and n should be printed second
3. All elements less than m are printed third
Sample Case: Input arr[] = {9,6,8,3,9,0,1,5,7,4}
Output = {9,6,8,9,7,3,4,5,0,1}





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
