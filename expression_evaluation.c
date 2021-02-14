#include<stdio.h>
#include<string.h>
int main()
{
	char input_exp[40],ch;
	int i,j,ind;
	int sum = 0;
	gets(input_exp);
	sum = input_exp[0] - '0';
	for(j = 0;j<strlen(input_exp);j++)
	{
		if(input_exp[j] == '+' || input_exp[j] == '-' || input_exp[j] == '*' || input_exp[j] == '/')
		{
			ind = j;
			break;
		}
	}

	if((strlen(input_exp) - ind) == ind - 1)
	{
	
	for(j = 0,i=1;i<j,j<strlen(input_exp);)
	{
		if(input_exp[j] == '+' || input_exp[j] == '-' || input_exp[j] == '*' || input_exp[j] == '/')
		{
			
			
				ch = input_exp[j];
				
				
				switch(ch)
				{
					case '+':
						{
							sum= sum + (input_exp[i] - '0');
							i++;
					j++;
							break;
						}
					case '-':
						{
							sum= (sum) - (input_exp[i] - '0');
							i++;
					j++;
							break;
						}
					case '*':
						{
							sum= sum * (input_exp[i] - '0');
							i++;
					j++;
							break;
						}
					case '/':
						{
							sum= sum / (input_exp[i] - '0');
							i++;
					j++;
							break;
						}
				}
					
			
			
		}
		else
			j++;
		
	}
	
	printf("%d",sum);
}
else
{
	printf("Can't perform evaluation!!");
}
}

