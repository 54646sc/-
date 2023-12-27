#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next ;
};
int main()
{
    int i,n;
    scanf("%d",&n);
    struct Node *head,*pcurrent,*q,*t;
    head=NULL;
    for(i=0;i<n;i++)
    {
        int a;
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
    t=head;
    while(t)
    {
        printf("%d ",t->data);
        t=t->next;
    }
    free(pcurrent);
    return 0;
}