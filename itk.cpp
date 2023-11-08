#include <stdio.h>
void hanshu(int (*p)[],int b)
{
    int sum=0;
    for(int i=0;i<b;i++)
    {
        sum+=*p;
        p++;
    }
    double x=1.0*sum/b;
    printf("%d %.1lf\n",sum,x);
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=0;i<a;i++)
    {
        int arr[b];
        for(int j=0;j<b;j++)
        {
            scanf("%d",&arr[j]);
        }
        int (*p)[b]=&arr;
        hanshu(p,b);
    }
    return 0;
}
