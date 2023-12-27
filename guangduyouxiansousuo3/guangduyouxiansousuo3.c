#include <stdio.h>
struct node 
{
    int x;
    int y;
};
int main()
{
    struct node que[2500];
    int arr[50][50];
    int n,m;
    scanf("%d%d",&n,&m);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int head=0;
    int tail=0;
    int book[50][50]={0};
    int qix,qiy;
    scanf("%d%d",&qix,&qiy);
    que[tail].x=qix;
    que[tail].y=qiy;
    tail++;
    int sum=1;
    book[qix][qiy]=1;
    while(head<tail)
    {
        int i,j;
        int tx,ty;
        int next[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
        for(i=0;i<4;i++)
        {
            tx=que[head].x+next[i][0];
            ty=que[head].y+next[i][1];
            if(tx<0||ty<0||tx>n-1||ty>m-1)
            {
                continue;
            }
            if(arr[tx][ty]>0&&book[tx][ty]==0)
            {
                book[tx][ty]=1;
                que[tail].x=tx;
                que[tail].y=ty;
                tail++;
                sum++;
            }
        }
        head++;
    }
    printf("\n%d\n",sum);
    return 0;
}

