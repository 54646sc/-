#include <stdio.h>
#include <math.h>
//判断是否为素数，是则返回1，不是则返回-1；
int sushu(int n)
{
    if(n==1) return -1;
    else if(n==2) return 1;
    else
    {
        int limit=sqrt(n)+1;
        int i;
        for(i=2;i<=limit;i++)
        {
            if(n%i==0) break;
        }
        if(i>limit) return 1;
        else return -1;
    }
}
//计算平方和
int pingfanghe(int n)
{
    int sum=0;
    int ret =n;
    while(ret)
    {
        int x=ret%10;
        ret=ret/10;
        sum=sum+pow(x,2);
    }
    return sum;
}
int main()
{
    int a,b;
    int arr[10001]={0};
    int count[10001]={0};
    int flag[10001]={0};
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
    	int j;
        int sum=pingfanghe(i);
        count[i]++;
        flag[sum]=-1;
        if(sum==1)
        {
        	arr[i]=count[i];
		}
        while(sum!=1)
        {
            for(j=0;j<=50;j++)
            {
                sum=pingfanghe(sum);
                count[i]++;
                flag[sum]=-1;
                if(sum==1)
                {
                    break;
                }
            }
            if(j>50)
        
            break;
        
         	else
        	arr[i]=count[i];
        }
        
    }
    for(int i=a;i<=b;i++)
    {
        if(arr[i]>0)
        {
            int c=sushu(i);
            if(c==1)
            {
                arr[i]*=2;
            }
            else
                arr[i]=arr[i];
                if(flag[i]!=-1)
            printf("%d %d\n",i,arr[i]);
        }
		}
        int k;
    for(k=a;k<=b;k++)
    {
        if(arr[k]>0)
        {
            break;
        }
    }
    if(k>b)
    {
        printf("SAD");
    }
    return 0;
}
