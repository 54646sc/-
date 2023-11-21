#include <stdio.h>
#include <stdlib.h>

typedef struct link
{
    int data;
    struct link *next;
}*Link;
Link pcurrent=NULL;
Link AppendNode(Link head,int data);
void DisplyNode(Link head);

int main()
{
    int    data;
    Link head = NULL;
    while (1)
    {
        scanf("%d",&data);
        if (data==-1)
            break;
        head = AppendNode(head,data);
    }
    DisplyNode(head);
    
    return 0;
}


/*在此实现 AppendNode函数 */
Link AppendNode(Link head,int data)
{
    
    if(head == NULL)
    {
        
        head->data= data;
        head->next = NULL;
        pcurrent= head;
    }
    else
    {
        Link newnode =NULL;
        newnode->data = data;
        newnode->next = NULL;
        pcurrent->next = newnode;
        pcurrent = pcurrent->next;
    }
    return head;
}
/*在此实现DisplyNode函数 */
void DisplyNode(Link head)
{
    if(head ==NULL)
    {
        printf("NULL");
    }
    else
    {
        Link pcurrent = head;
        
        while(pcurrent->next !=NULL)
        {
            printf("%d,",pcurrent->data);
            pcurrent=pcurrent->next;
        }
        printf("%d",pcurrent->data);
        
    }
}
