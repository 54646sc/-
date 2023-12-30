#include <stdio.h>
int you(int a,int b)
{
    
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    
    
    while(1)
    {
        int yushu=b%a;
        if(yushu==0)
        {
            break;
        }
        b=a;
        a=yushu;
    }
    if(a>1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(you(arr[i],arr[j]))
            {
                printf("%d %d\n",i+1,j+1);
                goto X;
            }
        }
    }
    X:

    return 0;
}