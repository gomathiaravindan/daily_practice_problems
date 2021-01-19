#include<stdio.h>
#include<malloc.h>

int main()
{
	int n,i,l,h,mid,temp;
	scanf("%d",&n);
	int *arr = (int*)malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	l = 0;
	mid = 0;
	h = n-1;
	while(mid<=h)
	{
		 if(arr[mid]==0)
		{
			temp = arr[l];
			arr[l]= arr[mid];
			arr[mid] = temp;
			++l;++mid;
		}
		
		else if(arr[mid]==1)
		{
			++mid;
		}
		
		else if(arr[mid]==2)
		{
			temp = arr[mid];
			arr[mid] = arr[h];
			arr[h] = temp;
			--h;
		}
	}
	
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	free(arr);
}


