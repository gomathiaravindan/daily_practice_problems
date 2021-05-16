## Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing orer in O(N) time complexity.
Sample Case: Input = [-4,-1,0,3,10]
Ouput: [0,1,9,16,100]




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
    
    i = 0,j = n - 1;
    
    if(((arr[i] * arr[i]) > (arr[mid] * arr[mid])) && ((arr[j] * arr[j]) > arr[mid] * arr[mid]))
    {
    	square[0] = arr[mid] * arr[mid];
    	printf("%d ",square[0]);
	}
	else
	{
		square[mid] = arr[mid] * arr[mid];
		
	}
	
		for(i=0,j=n-1;i<j;)
		{
			if((arr[i] * arr[i]) < (arr[j] * arr[j]))
			{
				square[++k] = arr[j] * arr[j];
				j--;
			}
			else if((arr[i] * arr[i]) > (arr[j] * arr[j]))
			{
				square[++k] = arr[i] * arr[i];
				i++;
			}
			else if((arr[i] * arr[i]) == (arr[j] * arr[j]))
			{
				square[++k] = arr[i] * arr[i];
				square[++k] = arr[j] * arr[j];
				j--;
				i++;
			}
		}
		if(i == 0)
		{
			square[++k] = arr[i] * arr[i];
		}
	//printf("%d ",k);
	printf("[");
    for(i = k;i>0;i--)
	{
		printf("%d ",square[i]);
	 } 
	 printf("]");
	 free(arr);
	 return 0;
}
