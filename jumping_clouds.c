#include<stdio.h>
int main()
{
	int i,n,count = 1,diff;
	
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;)
	{
		
		diff = n - i;
		
		if(arr[i] < diff)
		{
			if(arr[i] == 0)
			{
				i = i+1;
				
			}
			else
			{
			
			i = i + arr[i];
			count++;
		}
		}
		else
		{
			i = i + arr[i]--;
		}
	}

	printf("%d",count);
	return 0;
}
