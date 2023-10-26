#include <stdio.h>
#include <math.h>

int main() {
    float a;

    scanf("%f",&a);
    getchar();
    char ch;
    scanf("%c",&ch);
    int q;
    if(a<=1)
    {
        if(ch=='y')
        q=25;
        else
        q=20;
    }
    if(a>1)
    {
        if(ch=='y')
        {
        	int ret=(int)(a);
            if(a-ret>0)
            {
                a=ret+1;
            }
            q=(a-1)*1+25;
        }
        else {
        	int ret =(int)(a);
        if(a-ret>0)
            {
                a=ret+1;
            }
            q=(a-1)*1+20;
        
        }
    }
    printf("%d",q);
    return 0;
}
