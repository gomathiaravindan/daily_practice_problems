#include<stdio.h>
#include<string.h>
int main()
{
	char str[40],str1[40];
	int i,j,k;
	
	gets(str);
	gets(str1);
	
	int len = strlen(str) + strlen(str1);
	
	char res[len+2];
	
	for(i=0;i<strlen(str);i++)
	{
		res[i] = str[i];
	}
	
   res[i] = ' ';
	
	for(j = i+1,k = 0;j < len+2;j++,k++)
	{
		res[j] = str1[k];
	}
	
	printf("%s",res);
}
