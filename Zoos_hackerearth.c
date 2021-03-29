#include<stdio.h>
int main()
{
	char str[20];
	int count=0,count1=0,i;

	scanf("%s",str);

	for(i=0;i<strlen(str);i++)
	{
		if(str[i] == 'z')
		{
			count++;
		}
		else
			count1++;
	}

	if(count1/count == 2 && count1%count==0)
		printf("Yes\n");
	else
		printf("No\n");
}
