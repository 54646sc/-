#include <stdio.h>
int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    if(y==3)
    {
        printf("%d",x-1);
    }
    else{
        printf("%d",x-1-y/2);
    }
    return 0;
}
