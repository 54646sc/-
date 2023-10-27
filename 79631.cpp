//七个数字去掉一个最大值和一个最小值后的平均值
#include <stdio.h>
int main(){
    
    double arr[7];
    while((scanf("%lf",&arr[0]))!=EOF)
    {
        for(int i=1;i<7;i++)
        {
            scanf("%lf",&arr[i]);
        }
        double max=arr[0];
        double min=arr[0];
        int k1=0,k2=0;
        for(int i=1;i<7;i++)
        {
            if(min>arr[i])
            {
                min=arr[i];
                k2=i;
            }
            if(max<arr[i])
            {
                max=arr[i];
                k1=i;
            }
        }
        double sum=0;
        for(int i=0;i<7;i++)
        {
            if(k1==i)
            {
                continue;
            }
            if(k2==i)
            {
                continue;
            }
            sum+=arr[i];
        }
        printf("%.2lf\n",sum/5.0);
    }
    return 0;
} 
