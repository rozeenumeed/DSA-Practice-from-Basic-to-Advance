#include <iostream>
using namespace std;

void  sum(int arr[],int a,int n){
	int count=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j){
            continue;
        }
        if(arr[i]+arr[j]==a){
            cout<<i<<","<<j;
            count++;
           break;
        }
    }
    if(count==1){
    	break;
	}
    
}

}

int main(){
    
    int arr[]={4, 7, 2, 9, 5, 1};
    int n=sizeof(arr)/sizeof(int);
    sum(arr,11,n);
    return 0;
}
