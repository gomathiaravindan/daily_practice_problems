#include<stdio.h>
int main()
{
	int n,count=0,i;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i>=1 && i<=9)
		{
			count++;
		}
		else if(i>9 && i<=99)
		{
			count+=2;
		}
		else if(i>99 && i<=999)
		{
			count+=3;
		}
	}
	printf("The tot number of char:%d ",count);
}
