#include <iostream>
using namespace std;

void Largest(int a,int b,int c){
	int max=a;
	
	if(a>b && a>c){
		max=a;
	}
	else if(b>a && b>c){
		max=b;
	}
	else{
		max=c;
	}
	
	cout<<max;
}

int main(){

Largest(2,5,4);
	
	return 0;
}
