#include <stdio.h>
int hanshu(int n)
{
    int sum=0;
    int arr[10]={6,2,5,5,4,5,6,3,7,6};
    if(n==0)
    {
        return 6;
    }
    while(n)
    {
       
        int a;
        a=n%10;
        sum+=arr[a];
        n=n/10;
    }
    return sum;
}
int main()
{
    
    int m;
    scanf("%d",&m);
    int a,b,c,i,j;
    int sum=0;
    for(a=0;a<=11111;a++)
    {
        for(b=0;b<=11111;b++)
        {
            c=a+b;
            if(hanshu(a)+hanshu(b)+hanshu(c)==m-4)
            {
                printf("%d+%d=%d\n",a,b,c);
                sum++;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}