#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char string[1000];
     int ch;
    scanf("%s",string);
    int i,j = 0,count = 0,count1=0;
    
    while(i<j)
    {
    	if(string[i]!='a')
    	{
    		string[i] = 'a';
    		count1++;
    		if(count1>0)
    			break;
		}
	}
	
	for(i=0,i=strlen(string)-1;i<j;i++,j--)
	{
		if(string[i]==string[j])
		{
			count++;
		}
		
	}
	
	if(count==strlen(string)/2)
	{
		printf("IMPOSSIBLE");
	}
	else
		printf("%s",string);
