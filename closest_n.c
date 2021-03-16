#include<stdio.h>
int main()
{
	int n,m,i;
	
	scanf("%d",&n);
	scanf("%d",&m);
	
	for(i = 1;i<=n;i++)
	{
		if((n - i)% m == 0)
		{
			printf("%d",(n - i));
			break;
		}
	}
}
