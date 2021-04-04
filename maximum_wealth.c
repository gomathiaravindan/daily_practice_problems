## You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

Input: accounts = [[1,5],[7,3],[3,5]]
Output: 10
Explanation: 
1st customer has wealth = 6
2nd customer has wealth = 10 
3rd customer has wealth = 8
The 2nd customer is the richest with a wealth of 10.











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
