#include <iostream>
using namespace std;

void ArmStrong(int a){ 
     int original=a;
	 int sum=0;
	 while(a>0){
	 	int lastDigit=a%10;
	 	int cube=lastDigit*lastDigit*lastDigit;
	 	a=a/10;
	 	sum=sum+cube;
	 }
	 if(original==sum){
	 	cout<<"It is ";
	 }
	 else{
	 	cout<<"not";
	 }

}

int main(){
	ArmStrong(153);
	return 0;
}
