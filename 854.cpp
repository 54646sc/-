#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,N,a;                          
    scanf("%d %d",&x,&N);
    if(N%2==0)
    {
        printf("0 %d",a=x*pow(2,N/2));
    }
    else
    {
        printf("1 %d",a=x*pow(2,(N-1)/2));
    }
               return 0;
}
