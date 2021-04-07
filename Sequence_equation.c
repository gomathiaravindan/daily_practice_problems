## Given a sequence of n integers,p(1),p(2),p(3)...,  where each element is distinct and satisfies 1<=p<=n. For each x where 1<=x<=n , that is x increments from 1 to n, find any integer y such that p(p(y)) = x and keep a history of the values of y in a return array.
Sample Case: Input
3
2 3 1
 Output
2
3
1

#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int x[n],y[n];
    
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x[i]);
    }
    
    for(i=1;i<=n;i++)
    {
        for(j = 1;j<=n;j++)
        {
            if(i == x[j])
            {
                for(k = 1;k<=n;k++)
                {
                    if(j == x[k])
                    {
                        y[i] = k;
                        break;
                    }
                }
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%d\n",y[i]);
    }
    return 0;
}
