#include<stdio.h>
#include<string.h>
int main()
{
	char str_1[40],str_2[40],temp1,temp2,j = 2;
	int i;
	printf("Enter two string:");
	gets(str_1);
	gets(str_2);
	
	temp1 = str_1[0];
	temp2= str_1[1];
	
	for(i = 0;i<strlen(str_1)-2;i++)
	{
		str_1[i] = str_1[j++];
		
	}
	
	str_1[i] = temp1;
	str_1[i+1] = temp2;
	
	
	if(!(strcmp(str_1,str_2)))
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	
	return 0;
}
