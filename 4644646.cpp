#include <stdio.h>
#include <math.h>

int main(){
    int j;
    int count=0;
    for(int i=100;i<1000;i++)
    {
        int limit =sqrt(i)+1;
    for(j=2;j<limit;j++)
    {
        if(i%j==0)
        {
            break;
        }
        
        
    }

if(j>=limit)
{
    count++;
}
        
    }
    printf("%d",count);
    return 0;
}
