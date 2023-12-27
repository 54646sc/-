#include <stdio.h>
struct node 
{
    int x;
    int y;
    int s;
};
int main()
{
    struct node que[2501];
    int arr[51][51];
    int book[51][51]={0};
    int n,m;
    scanf("%d%d",&n,&m);
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int qix,qiy,zhx,zhy;
    scanf("%d%d%d%d",&qix,&qiy,&zhx,&zhy);
    int head=1,tail=1;
    que[tail].x=qix;
    que[tail].y=qiy;
    que[tail].s=0;
    tail++;
    book[qix][qiy]=1;
    int tx,ty;
    int next[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
    int flag=0;
    while(head<tail)
    {
        for(i=0;i<4;i++)
        {
            tx=que[head].x+next[i][0];
            ty=que[head].y+next[i][1];
            if(tx<1||tx>n||ty<1||ty>m)
            {
                continue;
            }
            if(arr[tx][ty]==0&&book[tx][ty]==0)
            {
                book[tx][ty]=1;
                que[tail].x=tx;
                que[tail].y=ty;
                que[tail].s=que[head].s+1;
                tail++;
            }
            if(tx==zhx&&tx==zhy)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        } 
        head++;
    }
    printf("%d",que[tail-1].s);
    return 0;
}