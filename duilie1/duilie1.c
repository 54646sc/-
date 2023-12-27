#include <stdio.h>
int main()
{
    int quene[1111]={6,3,1,7,5,8,9,2,4};
    int head=0;
    int tail=9;
    while(head<tail)
    {
        printf("%d ",quene[head]);
        head++;
        quene[tail]=quene[head];
        tail++;
        head++;
    }
    

    return 0;
}