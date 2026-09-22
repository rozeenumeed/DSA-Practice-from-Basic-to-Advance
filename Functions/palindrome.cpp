#include <iostream>
using namespace std;

void palindrome(int a){
		int reverse=0;
		int original=a;
		
		while (a>0){
		  int lastDigit=a%10;
		    a=a/10;
		    reverse=reverse*10+lastDigit;
		}
		
		if(original==reverse){
			cout<<"Number is Palindrome";
		}
		else{
			cout<<"Number is not Palindrome";
		}
		
	}
int main(){
	
		int a;
		cout<<"Enter a number";
		cin>>a;
		palindrome(a);
	
	return 0;
}
