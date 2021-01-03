#include<stdio.h>

int main()
{
	int arr[20], sequ[20],i,j,curr=0,past=0,temp=0,n,n1,count=0;
	printf("Enter the tot number of elements in array 1:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the tot number of elements in array 2:");
	scanf("%d",&n1);
	int flag[n1];
	for(i=0;i<n1;i++)
	{
		scanf("%d",&sequ[i]);
		flag[i]=0;
	}
	
	for(i=0;i<n1;i++)
	{
		for(j=curr;j<n;j++)
		{
			if(sequ[i]==arr[j])
			{
				curr = j;
				if(curr>past)
				{
					temp = curr;
					past=temp;
					flag[i] = 1;
					break;
				}
				else if(curr==0)
				{
					temp = curr;
					past=temp;
					flag[i] = 1;
					curr=j+1;
					break;
				}
			}
		}
	}
	
	for(i=0;i<n1;i++)
	{
		if(flag[i]==1)
		{
			count++;
		}
	}
	if(count==n1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}


