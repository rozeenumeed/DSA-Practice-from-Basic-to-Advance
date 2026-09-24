#include <iostream>
using namespace std;

void prime(int a,int b){
 for(int i=a;i<b;i++){
 	int count=0;
 	for(int j=2;j<i;j++){
 		if(i%j==0){ 
		count++;
	 }	 
 }
 if(count==0){
	 	cout<<i;
	 }	
}
}
int main(){
	prime(2,7);
	return 0;
}
