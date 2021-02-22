### Remove common from both the given string and modify the first string 
Sample Case: Input: aabcd and bcgd
Output: aag



#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str1[30], str2[30];
	gets(str1);
	gets(str2);
	int i,j,final_len = strlen(str1),k =0;
	
	int *letter = (int*)calloc(26,sizeof(int));
	char res[strlen(str1)];
	for(i = 0;str2[i]!='\0';i++)
	{
		for(j = 0;str1[j]!='\0';j++)
		{
			if(str2[i] == str1[j])
			{
				letter[str2[i] - 'A'] = 1;
			//	printf("%c %d",str2[i],letter[str2[i] - 'A']);
			}
		}
	}
	
	for(i = 0;str1[i]!='\0';i++)
	{
		if(letter[str1[i] - 'A'] !=1)
		{
			res[k] = str1[i];
			k++; 
		}
	}
	
	for(i = 0;str2[i]!='\0';i++)
	{
		if(letter[str2[i] - 'A']!=1)
		{
			res[k] = str2[i];
			k++; 
		}
	}
	
	res[k] = '\0';
	strcpy(str1,res);
	
	printf("%s",str1);
	
	
	free(letter);
	free(res);
}

