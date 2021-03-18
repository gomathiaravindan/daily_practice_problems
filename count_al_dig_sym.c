#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	int i,alpha= 0,dig=0,sym = 0;
	
	gets(str);
	
	for(i = 0;str[i]!='\0';i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		{
			alpha++;
		}
		else if(str[i] >= '1' && str[i] <= '9')
		{
			dig++;
		}
		else
		{
			if(str[i]!= ' ')	
				sym++;
		}
		
	}
		printf("Alpahabets: %d\n",alpha);
		printf("Digits: %d\n",dig);
		printf("Speacial Characters: %d",sym);
}
