#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n);
	while(n!=0)
	{
		if(n%2==1)
			count++;
		n/=2;
	}
	printf("The count of set bits of an interger is:%d",count);
}
