//¾ØÕó·­×ª 
#include <stdio.h>
void move(int *pointer)
{
    int t;
    t=pointer[1];
    pointer[1]=pointer[3];
    pointer[3]=t;
    t=pointer[2];
    pointer[2]=pointer[6];
    pointer[6]=t;
    t=pointer[5];
    pointer[5]=pointer[7];
    pointer[7]=t;
    
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int *p=arr[0];
    move(p);
    for(int i=0;i<3;i++)
    {
        printf("%d %d %d\n",arr[i][0],arr[i][1],arr[i][2]);
    }

    return 0;
}
