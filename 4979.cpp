#include <stdio.h>
#include <stdlib.h>
int cmp(const void*a,const void*b)
{
	if(*(double*)a==*(double*)b){
		return 0;
		
	}
	else if(*(double*)a>*(double*)b)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main(){
	double arr[3]={9.9,6.5,2.0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp);
	for(int i=0;i<3;i++)
	{
		printf("%lf ",arr[i]);
	}
	return 0;
}
