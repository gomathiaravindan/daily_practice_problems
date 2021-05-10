## Given an array A, divide it into two arrays say B and C, such that the sum of elements in array B is greater than or equal to the sum of elements in array C and array B should have a minimum number of elements.



#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j = 0,sum = 0,n,*arr_a,arr_b[40],arr_c[40],mid,sum1 = 0,ind,ind1;
	
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	
	arr_a = (int*)malloc(n*sizeof(int));
	
	for(i = 0;i<n;i++)
	{
		scanf("%d",&arr_a[i]);
	}
	mid = n/2;
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<n;j++)
		{
			if(arr_a[i] > arr_a[j])
			{
				arr_a[i] = arr_a[i] ^ arr_a[j];
				arr_a[j] = arr_a[i] ^ arr_a[j];
				arr_a[i] = arr_a[i] ^ arr_a[j];
			}
		}
	}
	
	j = 0;
	if((n%2) == 0)
	{
		for(i =0;i<mid;i++)
		{
			arr_b[j] = arr_a[i];
			sum+=arr_b[j];
			j++;
		}
		ind = j;
		
		j = 0;
		for(i = mid;i<n;i++)
		{
			arr_c[j] = arr_a[i];
			sum1+=arr_c[j];
			j++;
		}
		ind1 = j;
		
	}
	else if((n % 2)!=0)
	{
		j = 0;
		for(i =0;i<mid;i++)
		{
			arr_b[j] = arr_a[i];
			sum+=arr_b[j];
			j++;
		}
		ind = j;
		j = 0;
		for(i = mid;i<n;i++)
		{
			arr_c[j] = arr_a[i];
			sum1+=arr_c[j];
			j++;
		}
		ind1 = j;
	}
	
	printf("The sum of arr B is:%d",sum);
	
	printf("\nAnd the elements of arr B are:");
	
	printf("[");
	for(i = 0;i<ind;i++)
	{
		printf("%d ",arr_b[i]);
	}
	printf("]\n");
	printf("The sum of arr C is:%d",sum1);
	
	printf("\nAnd the elements of arr C are:");
	
	printf("[");
	for(i = 0;i<ind1;i++)
	{
		printf("%d ",arr_c[i]);
	}
	printf("]");
	
	free(arr_a);
	return 0;
}
