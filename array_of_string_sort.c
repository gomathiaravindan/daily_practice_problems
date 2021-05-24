#include<stdio.h>
#include<string.h>
int main()
{
	char str[40][40],ch,cpy[40];
	int i,j,k,n;
	
	printf("Enter the total number of string:");
	scanf("%d",&n);
	
	for(i = 0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	
	for(k = 0;k<n;k++)
	{
		for(i = 0,j = 2;i,j<=strlen(str[k])-1;)
	{
		if(str[k][i] >= str[k][i+1])
		{
			ch = str[k][i];
			str[k][i] = str[k][i+1];
			str[k][i+1] = ch;
			i+=2;
		}
		if(str[k][j-1] <= str[k][j])
		{
			ch = str[k][j-1];
			str[k][j-1] = str[k][j];
			str[k][j] = ch;
			j+=2;
		}
		else 
		{
			i+=2;
			j+=2;
		}
	}
	}
	
	for(i =  0;i<n;i++)
	{
		if(str + i >= str + (i + 1))
		{
			strcpy(cpy,str + i);
			strcpy(str + i,str + (i+1));
			strcpy(str + (i + 1),cpy);
		}
	}
	
	for(i = 0;i<n;i++)
	{
		printf("%s ",str[i]);
	}
}
