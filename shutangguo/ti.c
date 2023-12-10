#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count = 0;
    while(1)
    {
        int arr1[n];
        for(i=0;i<n;i++)
        {
            arr1[i]=arr[i];
        }
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                arr[i]=arr[i]/2+arr[n-1]/2;
                if(arr[i]%2==1)
                {
                    count ++;
                    arr[i]+=1;
                }
            }
            else
            {
                arr[i]=arr[i]/2+arr1[i-1]/2;
                if(arr[i]%2==1)
                {
                    count ++;
                    arr[i]+=1;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            int a=arr[0];
            if(arr[i]!=arr[0])
            {
                break;
            }
        }
        if(i>=n)
        {
            break;
        }
    }
    printf("%d",count);
    return 0;
}