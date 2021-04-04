#include<stdio.h>
int main()
{
	int r,c,i,j,max = 0,sum;
	printf("Enter the rows and columns of the matrix:");
	
	scanf("%d %d",&r,&c);
	int arr[r][c];
	
	for(i=0;i<r;i++)
	{
		sum = 0;
		for(j =0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
			sum+=arr[i][j];
		}
		if(max < sum)
		{
			max = sum;
		}
	}
	printf("%d",max);
	return 0;
}
