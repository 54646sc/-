#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==c)
    {
        if(b<d)
        {
            printf("u");
        }
        else {
        printf("d");}
        }
        else {
        if(a>c)
        {
            printf("l");

        }
        else {
        printf("r");
        }
        }
        
    
    return 0;
}
