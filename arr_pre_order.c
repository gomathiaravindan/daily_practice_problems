#include<stdio.h>
#define max 30
int stack[30];
void push(int);
int top=-1;
int main()
{
	int n,i,val,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&val);
		if(i==0)
		{
			push(val);
		}
		else
		{
			if(val > stack[top])
			{
				push(val);
			}
			else if(val < stack[top-1] && top!=1)
			{
				count++;
			}
			else if(val < stack[top-1] && top==1)
			{
				count++;
			}
			else
				push(val);
		}
	}
	if(count==0)
	{
		printf("True");
	}
	else
		printf("False");
	
}

void push(int x)
{
	top++;
	stack[top] = x;
}
