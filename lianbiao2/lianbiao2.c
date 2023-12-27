#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *head,*pcurrent,*q,*t;
    head=NULL;
    int i,a,n;//n个数
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        
        scanf("%d",&a);
        pcurrent=(struct Node *)malloc(sizeof(struct Node));
        pcurrent->data=a;
        pcurrent->next=NULL;
        if(head==NULL)
        {
            head=pcurrent;
        }
        else
        {
            q->next=pcurrent;
        }
        q=pcurrent;
    }
    int x;
    scanf("%d",&x);
    t=head;
    while(t)
    {
        if(t->next->data>x)
        {
            pcurrent=(struct Node *)malloc(sizeof(struct Node));
            pcurrent->data=x;
            pcurrent->next=NULL;
           
            pcurrent->next=t->next;
            t->next=pcurrent;
            break;
        }
        t=t->next;
    }
    t=head;
    while(t)
    {
        printf("%d ",t->data );
        t=t->next;
    }
    return 0;
}