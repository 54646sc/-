#include <stdio.h>
int main(){
    double a;
    scanf("%lf",&a);
    int b,c,d;
    scanf("%d%d%d",&a,&b,&d);
    if(b==11)
    {
        double f;
        if(d==1)
        {
            
            f=a*0.7-50;
        }
        else{
            f=a*0.7;
        }
        if(f<0)
        f=0;
        printf("%.2lf",f);
    }
    if(b==12)
    {
        double f;
        if(d==1)
        {
            
            f=a*0.8-50;
        }
        else{
            f=a*0.8;
        }
        if(f<0)
        f=0;
        printf("%.2lf",f);
    }
    return 0;
}
