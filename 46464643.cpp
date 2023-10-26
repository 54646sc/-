#include <stdio.h>
int main(){
    int a;
    while((scanf("%d",&a))!=EOF)
    {
        if(a==200)
        {
            printf("OK");
        }
        if(a==202)
        {
            printf("Accepted");
        }
        if(a==400)
        printf("Bad Request");
        if(a==403)
        printf("Forbidden");
        if(a==404)
        printf("Not Found");
        if(a==500)
        printf("Internal Server Error");
        if(a==502)
        {
            printf("Bad Gateway");
        }
    }
    return 0;
}
