#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[3]={0,0,0};
    for(int i=0;i<n;i++)
        {
        int a;
        scanf("%d",&a);
        arr[2]+=a;
        if(arr[2]>=60)
        {
            int rem=arr[2];
            arr[2]%=60;
            arr[1]=arr[1]+rem/60;
        }
        if(arr[1]>=60)
        {
            int rem=arr[1];
            arr[1]%=60;
            arr[0]=arr[0]+rem/60;
        }
        if(arr[0]>=24)
        {
            arr[0]%=24;
        }
                printf("%d %d %d\n",arr[0],arr[1],arr[2]);
    }
    
    return 0;
}