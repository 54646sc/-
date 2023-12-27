#include <stdio.h>
int h[100];
int n;
void swap(int x,int y)
{
    int t=h[x];
    h[x]=h[y];
    h[y]=t;
}
void siftdown(int i)
{
    int t,flag=0;
    while(i*2<=n&&flag==0)
    {
        if(h[i*2]<h[i])
        {
            t=i*2;
        }
        else
        {
            t=i;
        }
        if(i*2+1<=n)
        {
            if(h[i*2+1]<h[t])
            {
                t=i*2+1;
            }   
        }
        if(i!=t)
        {
            swap(i,t);
            i=t;
        }
        else
        {
            flag=1;
        }
    }
}
void create()
{
    int i;
    for(i=n/2;i>=1;i--)
    {
        siftdown(i);
    }
}
int deletemax()
{
    int t;
    t=h[1];
    h[1]=h[n];
    n--;
    siftdown(1);
    return t;
}
int main()
{
    int i,num;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        scanf("%d",&h[i]);
    }
    n=num;
    create();
    for(i=1;i<=num;i++)
    {
        printf("%d ",deletemax());
    }
    return 0;
}