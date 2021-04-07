#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int n,i,j,first,last,k,queries,arr[1000000],query[1000000];
    scanf("%ld",&n);

    scanf("%ld",&k);
    scanf("%ld",&queries);
    for(i = 0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    for(i=0;i<queries;i++)
    {
        scanf("%ld",&query[i]);
    }
    for(i = 1;i<=k;i++)
    {
            last = arr[n-1];
            
        for(j = n-1; j>0;j--)
        {
            arr[j]= arr[j-1];
        }
        arr[0] = last;
    }    
    
    for(i=0;i<queries;i++)
        printf("%ld\n",arr[query[i]]);
    
}
