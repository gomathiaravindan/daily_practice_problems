###Print the pattern
n = 3
	3
	33
	333
	33
	3

#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	k = n;
	i = (2 * n) - 1;
	for(;i>=1;i--)
	{
		if(i==n-1)
		{
			i = n ;
			n = n - 1;
		
		}
			
		else
		{
		
			for(j=0;j<=((2 * n) - 1) - i;j++)
				{
					printf("%d",k);
				}
			printf("\n");
		}
}
}
