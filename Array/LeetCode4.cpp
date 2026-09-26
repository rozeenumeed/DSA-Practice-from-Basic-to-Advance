#include <iostream>
using namespace std;

int FoundElement(int arr[],int n,int k){
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]==k){
				count++;
				return i;
				break;		
		}
	}
	for(int i=0;i<n;i++){
	
	if(count==0){     
     if(k<arr[i]){
     	return i;
    }
    else{
    	return n;
	}
	}
}
}

int main(){
	int arr[]={0,1,2,3,4,6};
	int n=sizeof(arr)/sizeof(int);
	cout<<FoundElement(arr,n,7);
	return 0;
}


