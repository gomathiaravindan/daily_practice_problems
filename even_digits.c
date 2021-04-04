#include<stdio.h>
int main()
{
	int n,i,j,count,t,count1=0;
	
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		count = 0;
		scanf("%d",&arr[i]);
		t = arr[i];
		
		while(t!=0)
		{
			count++;
			t/=10;
		}
		if(count % 2 == 0)
		{
			count1++;
		}
	}
	
	printf("%d",count1);
	return 0;
}
