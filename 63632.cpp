#include <stdio.h>
int main(){
int a;
scanf("%d",&a);
int miao=a%60;
int fen=a/60;
int shi=0;
if(fen>60)
{
    shi=fen/60;
    fen=fen%60;

}
printf("%d %d %d",shi,fen,miao);
    return 0;
}
