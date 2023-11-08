#include <stdio.h>
#include <math.h>
int panduan(int n)
{
    int x;int i;
    if(n==1) return -1;
    if(n==2) return 1;
    if(n>2)
    {
        int limit = sqrt(n)+1;
        for(i=2;i<=limit;i++)
        {
            if(n%i==0)
            {
                x=-1;
                break;
            }
        }
        if(i>limit)
        {
            x=1;
        }
        return x;
    }
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    char arr[a+3];
    scanf("%s",&arr);
    int flag;int j=b-1;
    for(int i=0;i<a-b+1;i++)
    {
        int sum=0;
        int ret=b;
        j=j-b+1;
        while(ret!=0)
        {
        	sum+=(arr[j]-'0')*pow(10,ret-1);
        	j++;
        	ret--;
		}
        flag=panduan(sum);
        if(flag==1)
        {
            j=j-b;
            for(int i=0;i<b;i++)
            {
                printf("%c",arr[j]);
                j++;
            }
            break;
        }
    }
    if(flag!=1)
    {
        printf("%d",404);
    }
    return 0;
}
