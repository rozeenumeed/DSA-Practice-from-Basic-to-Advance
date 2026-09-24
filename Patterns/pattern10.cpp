#include <iostream>
using namespace std;

int main(){
	for(int i=1;i<=4;i++){
		for(int j=4;j>=1;j--){
			if(j<=i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
	for(int n=2;n<=i;n++){
			cout<<"*";
		}
		cout<<endl;
		
	}
	for(int k=1;k<=3;k++){
		for(int l=1;l<=4;l++){
			if(l>k){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		for(int p=2;p>=1;p--){
			if(p>=k)
				cout<<"*";
			
		}
		cout<<endl;
	}
	
	return 0;
}
