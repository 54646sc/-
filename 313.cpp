#include <stdio.h>
#include <math.h>
int ss(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        int i,j;
        int limit=sqrt(n)+1;
        for(i=2;i<=limit;i++)
        {
            if(n%i==0)
            {
                break;
            }
        }
        if(i>limit)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int ret=ss(n);
    printf("%d",ret);

    return 0;
}
