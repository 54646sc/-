#include <stdio.h>
int min=999999;
int book[100]={0};
int arr[100][100];
int n,m;
void dfs(int cur,int step)
{
    book[cur]=1;
    if(step>min)
    {
        return ;
    }
    if(cur==n)
    {
        if(step<min)
        {
            min=step;
            return ;
        }
    }
    int i;
    for(i=1;i<=n;i++)
    {
        if(arr[cur][i]!=99999&&arr[cur][i]!=0&&book[i]==0)
        {
            dfs(i,step+arr[cur][i]);
            book[i]=0;
        }
    }
    return ;
}
int main()
{
    scanf("%d%d",&n,&m);
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                arr[i][j]==0;
            }
            else
            {
                arr[i][j]=99999;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        int a;
        int b;
        int c;
        scanf("%d%d%d",&a,&b,&c);
        arr[a][b]=c;
    }
    dfs(1,0);
    printf("\n%d\n",min);
    return 0;
}