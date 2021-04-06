#include<stdio.h>
int main()
{
	int i,no_of_rows,j;
	
	scanf("%d",&no_of_rows);
	
	for(i=1;i<=no_of_rows;i++)
	{
		for(j=0;j<=(2 * no_of_rows) - 1;j++)
		{
			if(i != no_of_rows)
			{
				if(j >= i &&  j < (2 * no_of_rows) - i)
				{
					printf("#");
				}
				else
				{
					printf("*");
				}
			}
			else
			{
				printf("*");
			}
			
		}
		printf("\n");
	}
}
