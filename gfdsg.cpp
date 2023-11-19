#include <stdio.h>
#include <string.h>
int main(){
    char* arr[5]={0};
    for(int i=0;i<5;i++)
    {
        scanf("%s",&arr[i]);
    }
    for(int i=0;i<5-1;i++)
    {
        for(int j=0;j<5-1-i;j++)
        {
            if(strcmp(arr[j],arr[j+1])>0)
            {
                char* ch;
                strcpy(ch,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],ch);
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        puts(arr[i]);
    }
    return 0;
}

