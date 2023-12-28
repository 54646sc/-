#include <stdio.h>
int f[1000]={0};
int n,m;
int sum=0;
void initi()
{
    int i;
    for(i=1;i<=n;i++)
    {
        f[i]=i;
    }
}
int getfirst(int x)
{
    if(f[x]==x)
    {
        return x;
    }
    else
    {
        f[x]=getfirst(f[x]);
        return f[x];
    }
}
void merge(int a,int b)
{
    int t1,t2;
    t1=getfirst(a);
    t2=getfirst(b);
    if(t1!=t2)
    {
        f[t2]=t1;
    }
}
int main()
{
    int i;
    scanf("%d",&n);
    initi();
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        int a;
        int b;
        scanf("%d%d",&a,&b);
        merge(a,b);
    }
    for(i=1;i<=n;i++)
    {
        if(f[i]==i)
        {
            sum++;
        }
    }
    printf("\n%d\n",sum);
    return 0;
}
