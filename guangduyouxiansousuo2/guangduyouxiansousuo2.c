#include <stdio.h>
char arr[20][20];
int getnum(int i,int j)
{
    int sum=0;
    int x=i;
    int y=j;
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
    return sum;
}
struct node 
{
    int x;
    int y;
};
int main()
{
    struct node que[400];
    int i,j,n,m;
    int book[20][20]={0};
    int qix,qiy,zhx,zhy;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%s",&arr[i]);
    }
    scanf("%d%d",&qix,&qiy);
    int head=0;
    int tail=0;
    que[tail].x=qix;
    que[tail].y=qiy;
    book[qix][qiy]=1;
    tail++;
    int mx,my,max;
    max=getnum(qix,qiy);
    mx=qix;
    my=qiy;
    int next[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
    int flag=0;
    while(head<tail)
    {
        int tx;
        int ty;
        for(i=0;i<4;i++)
        {
            tx=que[head].x+next[i][0];
            ty=que[head].y+next[i][1];
            if(tx<1|ty<1||tx>n-2||ty>m-2)
            {
                continue;
            }
            if(arr[tx][ty]=='.'&&book[tx][ty]==0)
            {
                que[tail].x=tx;
                que[tail].y=ty;
                book[tx][ty]=1;
                int num=getnum(tx,ty);
                tail++;
                if(num>max)
                {
                    max=num;
                    mx=tx;
                    my=ty;
                }
            }
        }
        head++;
    }
    printf("最多炸死敌人数人%d,炸弹安放坐标为(%d,%d)\n",max,mx,my);
    return 0;
}