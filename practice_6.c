### Two huge numbers are stored as a digits in separate arrays, calculate their sum and store the sum as digits in array.
Sample Case: Input: n = 5
1 2 3 4 5 n1 = 3
1 2 3
Output: 1 2 4 6 8




#include<stdio.h>
int main()
{
	int n,n1,i,j,sum=0,k=0;
	scanf("%d",&n);
	
	int *arr_1 = (int*)calloc(n,sizeof(int));
	int *arr2, *arr3,*arr_2,*res;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr_1[i]);
		
	}
	scanf("%d",&n1);
	arr_2 = (int*)calloc(n1,sizeof(int));
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr_2[i]);
	}
	if(n > n1)
	{
		arr2 = (int*)calloc(n,sizeof(int));
		for(i=n-n1,j=0;i<=n1,j<n1;i++,j++)
		{
		  arr2[i]=arr_2[j];
    	}
	}
	else
	{
		arr2 = (int*)calloc(n1,sizeof(int));
		for(i=n1-n,j=0;i<=n,j<n;i++,j++)
		{
		  arr2[i]=arr_1[j];
		  
    	}
	}
	
	
	if(n>n1)
	{
		res = (int*)calloc(n,sizeof(int));
		for(i=n-1;i>=0;i--)
		{
			sum+=arr_1[i]+arr2[i];
			if(sum <= 9)
			{
				res[i] = sum;
				sum =0;
			}
			if(i==0)
			{
				if(sum > 9)
				{
					break;
				}
			
			}
			else if(sum >9)
			{
				res[i] = sum%10;
				sum = sum/10;
				
			}
		}
		res[i] = sum;
		
			for(i=0;i<n;i++)
	{
		printf("%d ",res[i]);
	}
	free(arr2);
	free(arr_1);
	free(res);
	}

		
	else if(n<n1)
	{
		res = (int*)calloc(n1,sizeof(int));
		for(i=n1-1;i>=0;i--)
		{
			sum+=arr_2[i]+arr2[i];
			if(sum <= 9)
			{
				res[i] = sum;
				sum =0;
			}
			if(i==0)
			{
				if(sum > 9)
				{
					break;
				}
			
			}
			else if(sum >9)
			{
				res[i] = sum%10;
				sum = sum/10;
				
			}
		}
		res[i] = sum;
			for(i=0;i<n1;i++)
	{
		printf("%d ",res[i]);
	}
	free(res);
	free(arr2);
	free(arr_2);
		
	}

	else
	{
		res = (int*)calloc(n,sizeof(int));
		for(i=n-1;i>=0;i--)
		{
			sum+=arr_1[i]+arr2[i];
			if(sum <= 9)
			{
				res[i] = sum;
				sum =0;
			}
			if(i==0)
			{
				if(sum > 9)
				{
					break;
				}
			
			}
			else if(sum >9)
			{
				res[i] = sum%10;
				sum = sum/10;
				
			}
		}
		res[i] = sum;
		
			for(i=0;i<n;i++)
	{
		printf("%d ",res[i]);
	}
	free(arr2);
	free(arr_1);
	free(res);
	}
	
	

	
	
}
