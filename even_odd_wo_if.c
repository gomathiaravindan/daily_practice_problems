#include<stdio.h>
int main()
{
	int n;
	
	scanf("%d",&n);
	
	(n&1) == 1 ? printf("The given number is odd!!") : printf("The given number is even!!");
}
