#include <stdio.h>
int n,m,book[50][50],arr[50][50];
int num=0;
void dfs(int x,int y,int color)
{
    int i;
    int tx,ty;
    arr[x][y]=color;
    int next[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
    for(i=0;i<4;i++)
    {
        tx=x+next[i][0];
        ty=y+next[i][1];
        if(tx<0||ty<0||tx>n-1||ty>m-1)
        {
            continue;
        }
        if(arr[tx][ty]>0&&book[tx][ty]==0)
        {
            book[tx][ty]=1;
            
            dfs(tx,ty,color);
        }
    }
    return ;
}

int main()
{
    scanf("%d%d",&n,&m);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]>0)
            {
                num--;
                book[i][j]=1;
                dfs(i,j,num);
            }
        }
    }
    
    printf("有 %d 个小岛\n",-num);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%3d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
