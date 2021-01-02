#include<stdio.h>
#include<string.h>

int main()
{
	char s[20];
	int i,j,sum=0;
	gets(s);

	for(i = 0; s[i]!= '\0';i=i+2)
	{
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if(s[i+1] >= '1' && s[i+1] <= '9')
			{
				if(s[i+2] >= '1' && s[i+2] <= '9')
				{
					sum = (s[i+1] - '0') * 10 + (s[i+2] - '0');
		     		
					for(j=0;j<sum;j++)
					{
						printf("%c",s[i]);
					}
					i=i+1;
				}
				else
					{
						for(j=0;j<(s[i+1]-'0');j++)
						{
							printf("%c",s[i]);
						}
					
					}		
				}
		}

	}
}
