//精确到小数点后两位
#include <stdio.h>
int main(){
	double a;
	scanf("%lf",&a);
	a=(int)(a*100+0.5)/100.0;
	printf("%.2lf",a);
	return 0;
}
