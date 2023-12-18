#include <stdio.h>
int panduan(int a)
{
    int x1=0;
    int x2=0;
    while(a)
    {
        if(a%2==1)
        {
            x1++;
        }
        else
        {
            x2++;
        }
        a/=2;
    }
    if(x1%2==0&&x2%2==0)
    {
        return 10;
    }
    else if(x1%2==0&&x2%2!=0)
    {
        return 1;
    }
    else if(x1%2!=0&&x2%2==0)
    {
        return 0;
    }
    else
    {
        return 100;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        int x=panduan(a);
        printf("%d ",x);
    }
    return 0;
}