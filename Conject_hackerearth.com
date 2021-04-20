## You are given a number N. You can perform the following operations on N any number of times:

> If N is even, divide N by 2.

> If N is odd, replace N with 3N+1.

 

Your task is to find out, for a given N, if it is possible to reach the number 1 after performing the above two valid operations on N any number of times.

 


include<stdio.h>
int main()
{
    int n,flag,t,i=0;
 
    scanf("%d",&t);
    while(i < t)
    {
        scanf("%d",&n);
        flag = 0;
        while(n!=1)
        {
            flag = 1;
            if(n%2 == 0)
            {
                n = n / 2;
            }
            else
            {
                n = (3 * n) + 1;
            }
        }
        
        if(flag == 1)
            printf("YES\n");
        else
            printf("NO\n");
        i++;
    }
}
