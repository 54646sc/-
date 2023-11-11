#include <stdio.h>
int fact(int a,int b,int c,int d)
{
    if(a==b&&a==c&&a==d) return 0;
    else if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d) return 4;
    
else if((a==b&&a!=c&&a!=d&&c!=d)||(a==c&&a!=b&&a!=d&&b!=d)||(a==d&&a!=b&&a!=c&&b!=c)||(b==c&&b!=a&&b!=d&&a!=d)||(b==d&&b!=a&&b!=c&&a!=c)||(c==d&&c!=a&&c!=b&&a!=b))
    return 3;
	else
	return 2;}
int main(){
    int f,g;
    int count =0;
    scanf("%d%d",&f,&g);
    int ret=-1;
    while(ret != g)
    {
        int w,y,z,x;
    int aq=f;
    x=aq%10;
    aq=aq/10;
    y=aq%10;
    aq=aq/10;
    z=aq%10;
    w=aq/10;
    
    ret = fact(x,y,z,w);
        f++;
        count ++;
    }
    printf("%d %04d",count-1,f-1);
    return 0;
}
