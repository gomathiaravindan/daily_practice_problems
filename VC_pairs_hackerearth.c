#include<stdio.h>
#include<string.h>
int main()
{
	int len,i,t,count,j;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		count = 0;
		scanf("%d",&len);
		char s[len+1];
		scanf("%s",s);
		for(i=0;i<len - 1;i++)
		{
			 if((s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] == 'i' || s[i+1] == 'o' || s[i+1] == 'u') && (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'))
			{
				count++;
				
			}
			
			
			
		}
		printf("%d\n",count);
	}
	
}
