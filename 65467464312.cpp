#include <stdio.h>
double hanshu(double a)
{
    if(a>0)
    {
        return 1;
    }
    if(a<0)
    {
        return 0;
    }
    if(a==0)
    {
        return 0.5;
    }
}
int main(){
    double a;
    while((scanf("%lf",&a))!=EOF)
    {
        double ret = hanshu(a);
        printf("%lf",ret);
    }
    return 0;
}
