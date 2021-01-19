#include<stdio.h>
int main()
{
	int n,i,j,co_eff=1,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n-i;j++)
			printf("  ");
		for(k=0;k<=i;k++)
		{
			if(k==0 || i==0)
				co_eff=1;
			else{
				co_eff = co_eff * (i - k + 1)/k;
			}
			printf("%4d",co_eff);
		}
		printf("\n");
	}
}
