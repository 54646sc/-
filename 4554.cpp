#include <stdio.h>
int main(){
    double a,b,c,d;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    double x=a+c;
    double y=b+d;
    if(x<0&&x>-0.05)
    {
        x=0.0;
    }
    if(y<0&&y>-0.05)
    {
        y=0.0;
    }
    printf("(%.1lf, %.1lf)",x,y);
        return 0;

}
