#include <iostream>
using namespace std;

void factorial(int a){
	int fac=1;
	for(int i=1;i<=a;i++){
		fac=fac*i;
	}
	cout<<fac;
}

int main(){
	factorial(2);
	return 0;
}
