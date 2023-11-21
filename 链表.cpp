#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node* next; 
};
struct node* chushihua();
void bianli(struct node* header);
int main()
{
	struct node* header = chushihua();
	bianli(header);
	return 0;
}
struct node* chushihua()
{
	 
	struct node* header = (struct node*)malloc(sizeof(struct node));
	
	int shuju;
	
	header->data=-1;
	header->next=NULL;
	struct node* rear=header; 
	while(1)
	{
		scanf("%d",&shuju);
		if(shuju==-1)
		{
			break;
		}
		
			struct node* newnode = (struct node*)malloc(sizeof(struct node));
			newnode->data=shuju;
			newnode->next=NULL;
			rear->next=newnode;
			rear=newnode;
		
		
		
	}
	return header;
}
void bianli(struct node* header)
{
	if(header==NULL)
	{
		return; 
	}
	else
	{
		
		struct node* pcurrent =header->next;
		if(pcurrent==NULL)
		{
			printf("NULL\n");
		 } 
		while(pcurrent!=NULL)
		{
			printf("%d",pcurrent->data);
			pcurrent =pcurrent->next;
			if(pcurrent!=NULL)
			{
				printf("->"); 
			}
		}
		
	}
	
	
}
