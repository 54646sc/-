#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node* next; 
};
struct node* chushihua();
void bianli(struct node* header);
void shanchu(struct node* header,int remove);

int main()
{
	struct node* header = chushihua();
	bianli(header);
	int remove;
	scanf("%d",&remove);
	shanchu(header,remove);
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
		printf("\n");
	}
	
	
}
void shanchu(struct node* header,int remove)
{
	if(header==NULL)
	{
		return;
	}
	struct node*p1=header;
	struct node* p2=p1->next;
	while(p2!=NULL)
	{
		if(p2->data==remove)
		break;
		p1=p1->next;
		p2=p2->next;
	}
	if(p2==NULL)
	{
		return;
	}
	p1->next=p2->next;
	free(p2);
	p2=NULL;
}







