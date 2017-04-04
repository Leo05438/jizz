#include <iostream>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		int arr[100][100];
		int n;
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cin>>n;
				arr[i][j]=n;
			} 
		}
		for(int m=0;m<b;m++){
			for(int k=0;k<a;k++){
				cout<<arr[k][m]<<" ";
			}
			cout<<endl;
		} 
	}
	return 0;
}
