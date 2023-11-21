#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    
    //jiafa
    double x=a+c;
    double y=b+d;
    if(fabs(x)<0.05)
    {
        x=0;
    }
    if(fabs(y)<0.05)
    {
        y=0;
    }
    if(x!=0&&y!=0)
    {
        printf("(%.1lf%+.1lfi) + (%.1lf%+.1lfi) = %.1lf%+.1lfi",a,b,c,d,x,y);
    }
    else if(x==0&&y==0)
    {
        printf("(%.1lf%+.1lfi) + (%.1lf%+.1lfi) = 0.0\n",a,b,c,d);
    }
    else if(x==0&&y!=0)
    {
        printf("(%.1lf%+.1lfi) + (%.1lf%+.1lfi) = %.1lfi\n",a,b,c,d,y);
    }
    else
    {
        printf("(%.1lf%+.1lfi) + (%.1lf%+.1lfi) = %.1lf\n",a,b,c,d,x);
    }
    
    //jianfa
    x=a-c;
    y=b-d;
    if(fabs(x)<0.05)
    {
        x=0;
    }
    if(fabs(y)<0.05)
    {
        y=0;
    }
    if(x!=0&&y!=0)
    {
        printf("(%.1lf%+.1lfi) - (%.1lf%+.1lfi) = %.1lf%+.1lfi",a,b,c,d,x,y);
    }
    else if(x==0&&y==0)
    {
        printf("(%.1lf%+.1lfi) - (%.1lf%+.1lfi) = 0.0\n",a,b,c,d);
    }
    else if(x==0&&y!=0)
    {
        printf("(%.1lf%+.1lfi) - (%.1lf%+.1lfi) = %.1lfi\n",a,b,c,d,y);
    }
    else
    {
        printf("(%.1lf%+.1lfi) - (%.1lf%+.1lfi) = %.1lf\n",a,b,c,d,x);
	}
    return 0;
}
