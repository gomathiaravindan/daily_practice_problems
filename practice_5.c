#include<stdio.h>
int main()
{
	int n,i,max=0,j,val;
	scanf("%d",&n);
	int arr[n];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	
	int *arr_1 = (int*)calloc(max,sizeof(int));
	for(i=1;i<=n;i++)
	{
		arr_1[arr[i]] = arr[i];
	}
	
  /*for(i=1;i<=max;i++)
	{
		printf("%d:%d\n",i,arr_1[i]);
	}*/
	printf("{");
	for(i=1;i<n;i++)
	{
		val = arr[i] + 1;
		
		while(val)
		{
			if(arr_1[val]!=0)
			{
				printf("%d>%d,",arr[i],val);
				break;
			}
			val++;
		}
		
	}
	printf("%d}",arr[i]);
}
