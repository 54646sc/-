#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,d,i;
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    {
        scanf("%d%d%d",&b, &c, &d);
        if(pow(b,2)+pow(c,2)==pow(d,2))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        
    }


    return 0;
}
