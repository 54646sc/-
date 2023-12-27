#include <stdio.h>
int n,m;
int arr[101][101];
int book[101];
int sum=0;
void dfs(int cur)
{
    printf("%d ",cur);
    book[cur]=1;
    sum++;
    if(sum==n)
    {
        return ;
    }
    int i;
    for(i=1;i<=n;i++)
    {
        if(arr[cur][i]==1&&book[i]==0)
        {
            dfs(i);
        }
    }
    return ;
}
int main()
{
    int i,j;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                arr[i][j]=0;
            }
            else
            {
                arr[i][j]=9999;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        arr[a][b]=1;
        arr[b][a]=1;
    }
    dfs(1);
    
    return 0;
}