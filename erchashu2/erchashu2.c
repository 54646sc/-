#include <stdio.h>
int n;
int h[100];
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
        if(h[i]<h[i*2])
        {
            t=i*2;
        }
        else
        {
            t=i;
        }
        if(i*2+1<=n)
        {
            if(h[i*2+1]>h[t])
            {
                t=i*2+1;
            }
        }
        if(i!=t)
        {
            swap(t,i);
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
void duipaixu()
{
    while(n>1)
    {
        swap(1,n);
        n--;
        siftdown(1);
    }
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
    duipaixu();
    for(i=1;i<=num;i++)
    {
        printf("%d ",h[i]);
    }
    return 0;
}