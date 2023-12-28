#include <stdio.h>
void daojishi(int i)
{

    printf("%d ",i);
    if(i==0)
    {
        return ;
    }
    daojishi(i-1);
    return ;
}
int main()
{
    daojishi(9);
    return 0;
}