#include <stdio.h>
int main()
{
    int i,j,n,m;
    scanf("%d %d",&n,&m);
    getchar();
    char arr[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            arr[i][j]=getchar();
        }
        getchar();
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr[i][j]=='*')
            {
                arr[i][j]='*';
            }
            else
            {
                int count = 0;
                int a=i+1;
                int b=j;
                if(a>=0&&b>=0&&a<n&&b<m&&arr[a][b]=='*')
                {
                    count++;
                }
                a=i;
                b=j+1;
                if(a>=0&&b>=0&&a<n&&b<m&&arr[a][b]=='*')
                {
                    count++;
                }
                a=i-1;
                b=j;
                if(a>=0&&b>=0&&a<n&&b<m&&arr[a][b]=='*')
                {
                    count++;
                }
                a=i;
                b=j-1;
                if(a>=0&&b>=0&&a<n&&b<m&&arr[a][b]=='*')
                {
                    count++;
                }
                a=i+1;
                b=j+1;
                if(a>=0&&b>=0&&a<n&&b<m&&arr[a][b]=='*')
                {
                    count++;
                }
                a=i+1;
                b=j-1;
                if(a>=0&&b>=0&&a<n&&b<m&&arr[a][b]=='*')
                {
                    count++;
                }
                a=i-1;
                b=j+1;
                if(a>=0&&b>=0&&a<n&&b<m&&arr[a][b]=='*')
                {
                    count++;
                }
                a=i-1;
                b=j-1;
                if(a>=0&&b>=0&&a<n&&b<m&&arr[a][b]=='*')
                {
                    count++;
                }
                 arr[i][j]=count+'0';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// ....

// ..**

// *.*.

// .*.*