#include <iostream>
using namespace std;
void display(int arr[],int n);
void  reverse(int arr[],int n,int k){
	int count=1;
	for(int i=1;i<n;i++){
		if(arr[i]!=arr[i-1]){
			arr[count]=arr[i];
			count++;
		}
		if(count==k){
			display(arr,n);
			return;
		}
	}
	
	
}
void display(int arr[],int n){
	for(int j=0;j<n;j++){
		cout<<arr[j];
	}
}
int main(){
	int a;
	cout<<"Enter num";
	cin>>a;
int arr[]={0,1,1,2,3,4,5,6,6,7};
	int n=sizeof(arr)/sizeof(int);
	reverse(arr,n,a);
	return 0;
}
