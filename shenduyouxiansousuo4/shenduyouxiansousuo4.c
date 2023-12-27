#include <stdio.h>
char arr[20][20];
int max;
int m,n;
int mx,my;
int book[20][20]={0};
int getnum(int i,int j)
{
    int sum=0;
    int x,y;
    x=i;
    y=j;
    while(arr[x][y]!='#')
    {
        if(arr[x][y]=='G')
        {
            sum++;
        }
        x--;
    }
    x=i;
    y=j;
    while(arr[x][y]!='#')
    {
        if(arr[x][y]=='G')
        {
            sum++;
        }
        y++;
    }
    x=i;
    y=j;
    while(arr[x][y]!='#')
    {
        if(arr[x][y]=='G')
        {
            sum++;
        }
        x++;
    }
    x=i;
    y=j;
    while(arr[x][y]!='#')
    {
        if(arr[x][y]=='G')
        {
            sum++;
        }
        y--;
    }
    return sum;
}
void dfs(int x,int y)
{
    int i,j;
    int next[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
    if(getnum(x,y)>max)
    {
        max=getnum(x,y);
        mx=x;
        my=y;
    }
    for(i=0;i<4;i++)
    {
        int tx=x+next[i][0];
        int ty=y+next[i][1];
        if(tx<1|ty<1||tx>n-2||ty>m-2)
        {
            continue;
        }
        if(arr[tx][ty]=='.'&&book[tx][ty]==0)
        {
            book[tx][ty]=1;
            dfs(tx,ty);
        }
    }
    return ;
}
int main()
{
    int i,j,qix,qiy;
    scanf("%d%d%d%d",&n,&m,&qix,&qiy);
    for(i=0;i<n;i++)
    {
        scanf("%s",&arr[i]);
    }
    
    book[qix][qiy]=1;
    max=getnum(qix,qiy);
    mx=qix;
    my=qiy;
    dfs(qix,qiy);
    printf("%d (%d,%d)",max,mx,my);
    return 0;
}