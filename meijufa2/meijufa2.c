#include <stdio.h>
int main()
{
    char arr[30][30];
    int n,m;
    int mx,my;
    scanf("%d%d",&n,&m);
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%s",&arr[i]);
    }
    int max=-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            int x,y;
            
            int sum=0;
            
            x=i;
            y=j;
            if(arr[x][y]=='.')
            {
                while(arr[x][y]!='#')
                {
                    if(arr[x][y]=='G')
                    {
                        sum++;
                    }
                    x--;
                }
            }
            x=i;
            y=j;
            if(arr[x][y]=='.')
            {
                while(arr[x][y]!='#')
                {
                    if(arr[x][y]=='G')
                    {
                        sum++;
                    }
                    x++;
                }
            }
            x=i;
            y=j;
            if(arr[x][y]=='.')
            {
                while(arr[x][y]!='#')
                {
                    if(arr[x][y]=='G')
                    {
                        sum++;
                    }
                    y--;
                }
            }
            x=i;
            y=j;
            if(arr[x][y]=='.')
            {
                while(arr[x][y]!='#')
                {
                    if(arr[x][y]=='G')
                    {
                        sum++;
                    }
                    y++;
                }
            }
            if(sum>max)
            {
                max=sum;
                mx=i;
                my=j;
            }
        }
    }
    printf("将炸弹安在(%d,%d),最多炸死%d个敌人",mx,my,max);
    return 0;
}