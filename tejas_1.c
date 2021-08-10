/* Given an array of N integers, find the number m which is the sum of squares of the two numbers. All four number are distinct.
Sample Case: 7 a=[1,2,8,7,3,4,10]
Output: 65 (8 ^2 + 1^2 = 65 and 7^2+4^2 = 65) */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,prod[100],k = 0,num,flag = 0,*a;
	printf("Enter the total number of elements of the array:");
	scanf("%d",&n);
	
	a = (int*)malloc(n*sizeof(int));
	
	for(i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i = 0;i<n;i++)
	{
		for(j = i+1;j<n;j++)
		{
			prod[k++] = ((a[i] * a[i]) + (a[j] * a[j]));
		}
	}
	
	for(i = 0;i<k;i++)
	{
		for(j= i+1;j<k;j++)
		{
			if(prod[i] == prod[j])
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)
		{
			break;
		}
	}
	printf("%d",prod[i]);
	free(a);
	return 0;
}

