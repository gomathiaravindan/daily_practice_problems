#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,*arr,mid,*square,k = 0;
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	
	arr = (int*)malloc(n*sizeof(int));
	
	for(i = 0;i<n;i++){
		scanf("%d",&arr[i]);
     }
     mid = n/2;
     square = (int*)malloc(n*sizeof(int));
     square[k++]  = arr[mid] * arr[mid];
     
     for(i = mid-1,j = mid+1;i > 0,j < n;)
     {
     	if((arr[i] * arr[i]) > (arr[j] * arr[j]))
     	{
     		square[k++] = arr[j] * arr[j];
     		j++;
		 }
		else if((arr[i] * arr[i]) < (arr[j] * arr[j]))
		{
			square[k++] = arr[i] * arr[i];
     		i--;
		}
		else if((arr[i] * arr[i]) == (arr[j] * arr[j]))
		{
			square[k++] = arr[i] * arr[i];
			square[k++] = arr[j] * arr[j];
			i--;
			j++;
		}
	 }
	 printf("[");
	 for(i = 0;i<k;i++)
	 {
	 	printf("%d,",square[i]);
	 }
	 printf("]");
	 free(arr);
	 return 0;
}
