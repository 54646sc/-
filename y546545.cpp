#include <stdio.h>
char bijiao(int a)
{
    double c=10+0.1*a;
    if(c>a)
    {
        return 'v';
    }
    else {
    {
        return 'w';
    }
    }
}
int main(){
    int a;
    scanf("%d",&a);
    char ch=bijiao(a);
printf("%c",ch);
    return 0;
}
