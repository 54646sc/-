#include <stdio.h>
struct quene
{
    int line[999];
    int head;
    int tail;
};
int main()
{
    int i;
    struct quene q;
    q.head=0;
    q.tail=0;
    for(i=0;i<9;i++)
    {
        scanf("%d",&q.line[q.tail]);
        q.tail++;
    }
    while(q.head<q.tail)
    {
        printf("%d ",q.line[q.head]);
        q.head++;
        q.line[q.tail]=q.line[q.head];
        q.tail++;
        q.head++;
    }
    return 0;
}