#include<stdio.h>
#include<string.h>
int main()
{
	char s[20], sequ[20];
	int i,j,curr=0,past=0,temp=0,n,n1,count=0;
	
	gets(s);
	
	
	gets(sequ);
	int flag[strlen(sequ)];
	for(i=0;i<strlen(sequ);i++)
	{
	 
		flag[i]=0;
	}
	
	for(i=0;i<strlen(sequ);i++)
	{
		for(j=curr;j<strlen(s);j++)
		{
			if(sequ[i]==s[j])
			{
				curr = j;
				if(curr>past)
				{
					temp = curr;
					past=temp;
					flag[i] = 1;
					break;
				}
				else if(curr==0)
				{
					temp = curr;
					past=temp;
					flag[i] = 1;
					curr=j+1;
					break;
				}
			}
		}
	}
	
	for(i=0;i<strlen(sequ);i++)
	{
		if(flag[i]==1)
		{
			count++;
		}
	}
	if(count==strlen(sequ))
	{
		printf("The longest common subsequence is %s and its length is %d.", sequ,count);
	}
	else
	{
		printf("There is no common subsequence.");
	}
}


