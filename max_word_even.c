#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	int i,j,c = 0,max = 0,ind,val=0;
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
	{
		
		if(str[i]!= ' ')
		{
			++c;
			val = c;
		}
		
		else if(str[i]==' ')
		{
			printf("%d ",c);
			if((max <= c) && (c %2 == 0))
			{
				max = c;
				ind = i - max;
			}
			c = 0;
		}
		
	}
	
	if((max < val) && (val % 2 ==0))
	{
		max = val;
		ind = i - max;
		
	}
	for(j = ind;j < i;j++)
	{
		if(str[j]== ' ')
			break;
		printf("%c",str[j]);
	}
	
	
}

