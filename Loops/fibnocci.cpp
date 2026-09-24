#include <iostream>
using namespace std;

void fibnocci(int r){
	int a=0;
	int b=1;
	cout<<a;
	cout<<b;
	for(int i=0;i<r;i++){
	 int fib=a+b;
	 cout<<fib;	
	 a=b;
	 b=fib;
	}
}

int main(){
	fibnocci(4);
	 return 0;
}
