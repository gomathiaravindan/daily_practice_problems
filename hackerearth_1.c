#include<stdio.h>
#include<string.h>
int main()
{
    int t,f1=0,f2=0,f3=0,f4=0,f5=0,i,j;
    char str[100000];

	scanf("%d",&t);
    
	
    for(i=0;i<t;i++)
    {
       
        f1=0,f2=0,f3=0,f4=0,f5=0;
        scanf("%s",str);
        for(j=0;str[j]!='\0';j++)
        {
        	if(str[j] == 'a' || str[j] == 'A')
        	{
        		if(f1==0)
        		{
        			f1 = 1;
        			
				}
			}
			
			else if(str[j] == 'e' || str[j] == 'E')
        	{
        		if(f2==0)
        		{
        			f2 = 1;
        			
				}
			}
			else if(str[j] == 'i' || str[j] == 'I')
        	{
        		if(f3==0)
        		{
        			f3 = 1;
        			
				}
			}
			else if(str[j] == 'o' || str[j] == 'O')
        	{
        		if(f4==0)
        		{
        			f4 = 1;
        			
				}
			}
			else if(str[j] == 'u' || str[j] == 'U')
        	{
        		if(f5==0)
        		{
        			f5 = 1;
        			
				}
			}
		}
		if(f1 == 1 && f2 ==1 && f3 == 1 && f4 == 1 && f5 == 1)
    {
    	printf("lovely string\n");
	}
	else
	{
		printf("ugly string\n");
	}
    }
    
    
}
