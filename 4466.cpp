#include<stdio.h>
int main(){
	double a=1;
    double arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%lf",&arr[i][j]);
        }
    }
    double x=0;
    for(int i=0;i<3;i++)
    {
        if(arr[i][0]>=arr[i][1]&&arr[i][0]>=arr[i][2])
    {
        printf("W ");
            x=arr[i][0];
    }
    else if(arr[i][1]>=arr[i][0]&&arr[i][1]>=arr[i][2])
    {
        printf("T ");
        x=arr[i][1];
    }
    else{printf("L ");
        x=arr[i][2];}
        a*=x;
        
        
    }
    
    printf("%.2lf",(a*0.65-1)*2);
    
    return 0;
}
