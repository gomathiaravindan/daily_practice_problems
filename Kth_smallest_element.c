/* Given a 2D n x n matrix in which each row is sorted in ascending order. So the output should find the kthe shortest element from the matrix */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int row,col,i,j,len,n=0,k;
	
	printf("Enter the rows and column for the matrix:");
	scanf("%d %d",&row,&col);
	len = row * col;
	int matrix[row][col];
	int arr[len];
	printf("enter the elements of the matrix:");
	for(i = 0;i<row;i++)
	{
		for(j = 0;j<col;j++)
		{
			scanf("%d",&matrix[i][j]);
			arr[n++] = matrix[i][j];
		}
	}
	printf("enter the k value:");
	scanf("%d",&k);
	
	
	for(i = 0;i<n;i++)
	{
		for(j = i+1;j<n;j++)
		{
			if(arr[i] > arr[j])
			{
				arr[i] = arr[i] ^ arr[j];
				arr[j] = arr[i] ^ arr[j];
				arr[i] = arr[i] ^ arr[j];
			}
		}
	}
    printf("%d",arr[k-1]);
}
