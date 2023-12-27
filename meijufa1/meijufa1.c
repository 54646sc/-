#include <stdio.h>

int main()
{
    int book[10]={0};
    
    int i;
    
    int arr[9];
    
    int total=0;
    for(arr[0]=1;arr[0]<10;arr[0]++)
    for(arr[1]=1;arr[1]<10;arr[1]++)
    for(arr[2]=1;arr[2]<10;arr[2]++)
    for(arr[3]=1;arr[3]<10;arr[3]++)
    for(arr[4]=1;arr[4]<10;arr[4]++)
    for(arr[5]=1;arr[5]<10;arr[5]++)
    for(arr[6]=1;arr[6]<10;arr[6]++)
    for(arr[7]=1;arr[7]<10;arr[7]++)
    for(arr[8]=1;arr[8]<10;arr[8]++)
    {
        int sum=0;
        for(i=0;i<10;i++)
        {
            book[i]=0;
        }
        for(i=0;i<9;i++)
        {
            book[arr[i]]=1;
        }
        for(i=1;i<10;i++)
        {
            sum+=book[i];
        }
        if(sum==9&&arr[0]*100+arr[1]*10+arr[2]+arr[3]*100+arr[4]*10+arr[5]==arr[6]*100+arr[7]*10+arr[8])
        {
            printf("%d%d%d+%d%d%d=%d%d%d\n",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8]);
            total++;
        }
    }
    printf("total=%d\n",total/2);
    

    return 0;
}