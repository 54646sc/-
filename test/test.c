#include <stdio.h>
int n,m;

int main()
{
    int i,j,k;
    scanf("%d%d",&n,&m);
    int arr[n+1][n+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            arr[i][j]=0;
        }
    }
    int x1,y1,x2,y2;
    for(k=0;k<m;k++)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        for(i=x1;i<=x2;i++)
        {
            for(j=y1;j<=y2;j++)
            {
                if(arr[i][j]==0)
                {
                    arr[i][j]=1;
                }
                else
                {
                    arr[i][j]=0;
                }
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}