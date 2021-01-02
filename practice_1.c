### Count the number of character for given n numbers written in a paper.
sample case: n = 13, output: 17

#include<stdio.h>
int main()
{
	int n,t,count=0,i;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t = i;
		while(t!=0)
		{
			count++;
			t/=10;
		}
		printf("The tot number of char:%d ",count);
	}
	
}
