#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n,m;
	int arr[100];
	cin>>n;
	for(int i=0;i<n;i++){
		for(int r=0;r<4;r++){
			cin>>m;
			arr[r]=m;	
		}
		if(arr[1]-arr[0]==arr[2]-arr[1]){
			int d1=arr[1]-arr[0];
			arr[4]=arr[3]+d1;
		}
		else if(arr[1]/arr[0]==arr[2]/arr[1]){
			int d2=(arr[1]/arr[0]);
			arr[4]=arr[3]*d2;
		}
		for(int j=0;j<5;j++){
			cout<<arr[j]<<" ";
		}
		cout<<endl;	
	}
	return 0;
}
