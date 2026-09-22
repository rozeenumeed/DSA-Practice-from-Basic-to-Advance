#include <iostream>
using namespace std;

double SquareFormula(int a,int b){
	int ans=(a*a)+(b*b)+2*a*b;
	return ans;
}

int main(){
	cout<<SquareFormula(2,3);
	return 0;
}
