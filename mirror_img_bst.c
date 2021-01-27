#include<stdio.h>
#include<stdlib.h>
typedef struct tree *node;
node insert(int, node);
node mirror_img(node);
struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
}*root;



int main()
{
	node t = NULL;
	int elem,ch,n,x,i=0;
	scanf("%d",&n);
	do{
		printf("Enter an element:");
		scanf("%d",&elem);
		t = insert(elem,t);
		i++;
	}while(i < n);
	
	printf("Original image:\n");
	display(t);
	printf("\n");
	printf("Mirror image:\n");
	mirror_img(t);
	display(t);
}

node insert(int item,node t)
{
	struct tree *new_node;
	
	new_node = (struct tree*)malloc(sizeof(struct tree));
	
	if(new_node == NULL)
	{
		printf("Can't insert");
	}
	else
	{
		if(t==NULL)
		{
			new_node->data = item;
			new_node->left = NULL;
			new_node->right = NULL;
			t = new_node;
		}
		else
		{
			if(item < t->data)
			{
				t->left = insert(item,t->left);
			}
			else
			{
				t->right = insert(item, t->right);
			}
		}
		return t;
	}
}

node mirror_img(node t)
{
	node *temp;
	if(t!=NULL)
	{
		mirror_img(t->left);
		mirror_img(t->right);
		
		temp= t->left;
		t->left= t->right;
		t->right = temp;
	}
}
void display(node t)
{
	if(t->left)
		display(t->left);
	printf("%d\t", t->data);
	if(t->right)
		display(t->right);
}
