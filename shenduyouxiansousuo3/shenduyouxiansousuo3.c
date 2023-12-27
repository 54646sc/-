#include <stdio.h>
int n,m,book[51][51],arr[51][51],min=9999999;
int zhx,zhy;
void dfs(int x,int y,int step )
{
    if(x==zhx&&y==zhy)
    {
        if(step<min)
        {
            min=step;
        }
        return ; 
    }
    int next[4][2]={ {0,1},{0,-1},{1,0},{-1,0}};
    int i;
    int tx,ty;
    for(i=0;i<4;i++)
    {
        tx=x+next[i][0];
        ty=y+next[i][1];
        if(tx<1||tx>n||ty<1||ty>m)
        {
            continue;
        }
        if(book[tx][ty]==0&&arr[tx][ty]==0)
        {
            book[tx][ty]=1;
            dfs(tx,ty,step+1);
            book[tx][ty]=0;
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
        for(j=1;j<=m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int qix,qiy;
    
    scanf("%d%d%d%d",&qix,&qiy,&zhx,&zhy);
    book[qix][qiy]=1;
    dfs(qix,qiy,0);
    printf("最少步数为%d\n",min);
    return 0;
}