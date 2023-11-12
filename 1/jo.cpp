#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int x,y,z;
    x=a%10;
        a=a/10;
    y=a%10;
    a=a/10;
    z=a%10;
    printf("%d",x*100+y*10+z);
    return 0;
}
