#include <stdio.h>
int main()
{
    int data[111];
    int next[111];
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&data[i]);
    }
    for(i=1;i<n;i++)
    {
        next[i-1]=i;
    }
    next[n-1]=-1;
    int x;
    scanf("%d",&x);
    data[n]=x;
    int head=0;
    int t=head;
    while(t>=0)
    {
        if(data[t]>data[n])
        {
            next[n]=t;
            next[t-1]=n;
            break;
        }
        t=next[t];
    }
    t=head;
    while(t>=0)
    {
        printf("%d ",data[t]);
        t=next[t];
    }
    return 0;
}