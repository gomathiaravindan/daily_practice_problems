## Given as ascii value to string.
Sample Case: Input = "104101108108111443211911111410810033"
Output: hello, world!



#include<stdio.h>
#include<string.h>
int main()
{
	char ascii[100];
	int sum = 0,i,j;
	
	printf("Enter the string of ascii values:");
	gets(ascii);
	
	for(i = 0;i<strlen(ascii);)
	{
		sum = sum * 10 + (ascii[i] - '0');
		sum = sum * 10 + (ascii[i+1] - '0');
		if(sum >= 65 && sum <= 90)
		{
			printf("%c",sum);
			sum = 0;
			i+=2;
		}
		else if(sum >= 97 && sum <= 122)
		{
			printf("%c",sum);
			sum = 0;
			i+=2;
		}
		else if(sum >= 10 && sum <= 13)
		{
			sum = sum * 10 + (ascii[i+2] - '0');
			if(sum >= 97 && sum <= 122)
			{
				printf("%c",sum);
				sum = 0;
				
			}
			i+=3;
		}
		else 
		{
			printf("%c",sum);
			sum = 0;
			i+=2;
		}
		
		
	}
	return 0;
}
