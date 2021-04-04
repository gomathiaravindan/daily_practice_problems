## Given an array nums of integers, return how many of them contain an even number of digits.

Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits.










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
