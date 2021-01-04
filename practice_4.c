Given 2 strings identify whether they are same by considering the '#' character as a backspace, for eg: ab#c will result in ac.
Sample Case: Input: s = ab#c , t = #ab#c
Output: True


#include<stdio.h>
#include<string.h>
int max = 30;
int stack[30];
int stack_1[30];
int count = 0;
int count_1=0;
int top = -1;
int top_1=-1;
int flag = 0;
int push(char);
int pop();
int push_1(char);
int pop_1();
int isfull();
int isempty();
int isfull_1();
int isempty_1();
void print();

int main()
{
	char s[30], t[30];
	gets(s);
	gets(t);
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
		{
			push(s[i]);
		}
		else if(s[i] == '#')
		{
			pop();
		}
	}
		
	for(i=0;t[i]!='\0';i++)
	{
		if((t[i]>='a' && t[i]<='z') || (t[i]>='A' && t[i]<='Z'))
		{
			push_1(t[i]);
		}
		else if(t[i] == '#')
		{
			pop_1();
		}
	}
	
	print();

}

int isfull()
{
	if(top == max)
		return 1;
	else
		return 0;
}

int isempty()
{
	if(top == -1)
		return 1;
	else
		return 0;
}
int push(char c)
{

	if(!isfull())
	{
		top= top+1;
		stack[top] = c;
	
	}
	
}

int pop()
{
	char ch;
	
	if(!isempty())
	{
		ch = stack[top];
		top--;
	
		return ch;
	}
	
}

int isfull_1()
{
	if(top_1 == max)
		return 1;
	else
		return 0;
}

int isempty_1()
{
	if(top_1 == -1)
		return 1;
	else
		return 0;
}
int push_1(char c)
{

	if(!isfull())
	{
		top_1= top_1+1;
		stack_1[top] = c;
		
	}
	
}

int pop_1()
{
	char ch;
	
	if(!isempty_1())
	{
		ch = stack_1[top_1];
		top_1--;
	
		return ch;
	}
	
}

void print()
{
	char s,t;
	while(!isempty() && !isempty_1())
	{
		s = pop();
		t = pop_1();
		
		if(s == t)
		{
			flag = 1;
		}
		else
		{
			break;
		}
	}
	if(flag == 1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
