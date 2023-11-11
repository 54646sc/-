#include <stdio.h>
void swap(int* a,int* b)
{
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int *ap=&a;
    int *bp=&b;
    swap(ap,bp);
    printf("After swap:%d,%d\n",a,b);
    return 0;
}
