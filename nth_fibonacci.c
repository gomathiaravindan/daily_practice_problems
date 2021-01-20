#include<stdio.h>

int main()
{
	int n1=0,n2=1,n,n3,i=2;
	scanf("%d",&n);
	while(i<=n-1)
	{
		n3 = n1+n2;
		n1=n2;
		n2=n3;
		i++;
	}
	printf("%d",n3);
}
