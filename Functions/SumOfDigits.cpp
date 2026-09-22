#include <iostream>
using namespace std;

double sumOfDigit(int a){
	double sum=0;
	while(a>0){
		int lastDigit=a%10;
		a=a/10;
		sum+=lastDigit;
	}
	return sum;
}

int main(){
	
   cout<<sumOfDigit(123);
	return 0;
}
