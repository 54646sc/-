#include <stdio.h>
int hanshu(int x)
{
    int k=0;
    for(int i=1;;i++)
    {
       
        k+=i;
        if(x-k<=0)
        {
            return i;
            break;
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        int ret=hanshu(i);
        sum=sum+ret;
    }
    printf("%d",sum);
    return 0;
}
