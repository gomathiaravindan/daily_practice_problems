#include<stdio.h>
#include<string.h>

int main()
{
	char s[30];
	gets(s);
	reverse(s);

}


void reverse(char *p)
{
	if(*p=='\0')
		return;
	
	 reverse(p+1);
	 printf("%c", *p);
	
}
