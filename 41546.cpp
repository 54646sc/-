#include <stdio.h>
int main(){
    long long a,b,c;
    scanf("%lld:%lld %lld",&a,&b,&c);
    long long hour =c/60;
    long long minute = c%60;
    hour=hour+a;
    minute = minute +b;
    if(minute>60)
    {
        hour=hour+minute/60;
        minute=minute%60;
        
    }
    hour=hour%24;
    printf("%02lld:%02lld",hour,minute);

    return 0;
}
