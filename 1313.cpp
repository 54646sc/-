#include <stdio.h>
int main(){
    int arr[8];
    int i;
    for(i=0;i<8;i++)
    {
        scanf("%d",&arr[i]);

    }
    if((arr[7]==arr[0]*1+arr[1]*2+arr[2]*3+arr[3]*4+arr[4]*5+arr[5]*6+arr[6]*7)%10)
    {
        printf("0");
    }
    else {
        printf("1");
    }
    return 0;
}
