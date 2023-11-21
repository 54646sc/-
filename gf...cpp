#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node* next; 
};
struct node* chushihua();
void bianli(struct node* header);
void add(struct node* head,int charu);
int main()
{
	struct node* header = chushihua();
	bianli(header);
	int charu;
	scanf("%d",&charu);
	add(header,charu);
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
			printf("\n");
			return;
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
void add(struct node* header,int charu)
{
	if(header==NULL)
	{
		struct node* y= (struct node*)malloc(sizeof(struct node ));
		y->data=charu;
		y->next = NULL;
		header->next = y;
	}
	struct node* p1=header;
	struct node* p2=p1->next;
	while(p2!=NULL)
	{
		if(charu<p2->data)
		{
			break;
		}
		p1=p2;
		p2=p2->next;
	}
	if(p2==NULL)
	{
		struct node* pp= (struct node*)malloc(sizeof(struct node));
		pp->data=charu;
		pp->next=NULL;
		p1->next=pp;
	}
	struct node* p= (struct node*)malloc(sizeof(struct node ));
	p->data=charu;
	p->next=NULL;
	p1->next =p;
	p->next =p2;
}












