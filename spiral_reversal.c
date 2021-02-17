#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int matrix[m][n];
    
    for(i =0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int k=0,l=0;
    
   while(k <m && l<n)
   {
   
       for(i = l;i<n;i++)
       {
           printf("%d ",matrix[l][i]);
       }
        k++;
         
         for(i = k;i<m;i++)
         {
             printf("%d ",matrix[i][n-1]);
         }
         
         
         n--;
         if(k < m)
         {
		 
	         for(i = n-1;i>=l;--i)
	         {
	             printf("%d ",matrix[m-1][i]);
	         }
	         m--;
	     }
     	if(l<n)
     	{
     		for(i = m-1;i>=k;--i)
     		{
     			printf("%d ",matrix[i][l]);
			 }
		 }
		 l++;
	}
    return 0;
}


