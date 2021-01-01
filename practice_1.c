### Count the number of character for given n numbers written in a paper.
sample case: n = 13, output: 17

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
