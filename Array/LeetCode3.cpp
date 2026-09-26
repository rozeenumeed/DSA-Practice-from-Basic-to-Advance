#include <iostream>
using namespace std;

void RemoveDuplicate(int arr[],int n,int k){
	for(int i=0;i<n;i++){
		if(arr[i]==k){
			int temp=arr[i];
			arr[i]=arr[n-1];
			arr[n-1]=temp;
			n--;
		}
	}
	for(int j=0;j<n;j++){
		cout<<arr[j];
	}
	
}
int main(){
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(int);
	RemoveDuplicate(arr,n,4);
	return 0;
}
