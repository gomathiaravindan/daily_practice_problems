## Given the array with 0's and 1's, identify the row with maximum number of 1's.
Sample Case: Input = [0 0 1 1
		      0 1 1 1
		      1 1 1 1
		      0 0 0 0]
Output: 2




#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,m,matrix[30][30],max = 0,count = 0,ind;
	printf("Enter the number of rows and columns:");
	scanf("%d %d",&m,&n);
	
	for(i = 0;i<m;i++)
	{
		count = 0;
		for(j = 0;j<n;j++)
		{
			scanf("%d",&matrix[i][j]);
			if(matrix[i][j] == 1)
			{
				count++;
			}
		}
		if(max < count)
		{
			max = count;
			ind = i;
		}
	}
	
	printf("The row with the maximum number of 1's is: %d",ind);
	return 0;
}
