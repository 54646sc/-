//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成（1和461）,（14和61）,（146和1),如果所有拆分后的乘积之和等于自身，则是一个Lily Number。

#include <stdio.h>
int main(){
    for(int i=10000;i<100000;i++)
    {
        int x1,x2,y1,y2,z1,z2,k1,k2;
        x1=i/10000;
        x2=i%10000;
        y1=i/1000;
        y2=i%1000;
        z1=i/100;
        z2=i%100;
        k1=i/10;
        k2=i%10;
        if(i==x1*x2+y1*y2+z1*z2+k1*k2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
