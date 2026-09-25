#include <iostream>
using namespace std;

void binary(int arr[],int n,int a){
	
	int mid=(arr[0]+arr[n-1])/2;
	
	if(a<=mid){	
	for(int i=arr[0];i<mid;i++){
		if(a==arr[i]){
			cout<<"num is"<<arr[i]<<"at index"<<i;
		}
    }
	}
	if(a>=mid){
		for(int j=mid;j<n-1;j++){
		if(a==arr[j]){
			cout<<"num is"<<arr[j]<<"at index"<<j;
		}
		
	}	
		}
	}
	


int main(){
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(int);
	binary(arr,n,3);
	return 0;
}
