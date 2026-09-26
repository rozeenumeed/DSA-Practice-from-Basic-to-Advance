#include <iostream>
using namespace std;

void prefix(string arr[],int n){
	
	int i=0;
	   for(int l=0;l<arr[0].size();l++){	   
		for(int j=1;j<n;j++){
			
			if(arr[i][l]!=arr[j][l]){
				return;
			}
					
		}
		cout<<arr[i][l];
}
}
int main(){
	string arr[]={"flower","fow","flex"};
	int n=sizeof(arr)/sizeof(string);
	prefix(arr,n);
	return 0;
}
