#include<iostream>
using namespace std;
int main(void){
	int D,P;
	cin>>D>>P;
	if(P==3) cout<<D-1<<endl;
	else cout<<D-(P/2+1)<<endl;
	return 0;
}

