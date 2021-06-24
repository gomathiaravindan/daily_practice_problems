// Given the string find the corresponding excelsheet number 
// Sample Case: AB - 28, ZY - 701, A - 1

#include<stdio.h>
#include<string.h>
int main()
{
	int i,sum = 0;
	char columnTitle[7];
	int letters[26];
	printf("Enter the string like in excelsheets:");
	gets(columnTitle);
	
	for(i=1;i<=26;i++)
	{
		letters[i] = i;
	}
	
	/*for(i=1;i<=26;i++)
	{
		printf("%c:%d\n",(i-1)+'A',letters[i]);
	}*/
	//printf("%d",columnTitle[0] - 'A');
	if(strlen(columnTitle) == 1)
	{
		printf("%d\n",letters[(columnTitle[0] - 65) + 1]);
	}
	else
	{
	
	   for(i = 0;i<strlen(columnTitle);i++)
	   {
	   	sum = (sum * 26) + (letters[columnTitle[i] - 65 +1]);
	   }
	   printf("%d\n",sum);
	}
	return 0;
}
