#include <stdio.h>
int main(){
int a;
scanf("%d",&a);
int year = a/10000;
int month = (a%10000)/100;
int date =a%100;
printf("year=%4d\n",year);
printf("month=%02d",month);
printf("date=%02d\n",date);
    return 0;}
