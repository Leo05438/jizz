#include <iostream>
#include <iomanip>
using namespace std;
#define NUM 100
int main(){
	int arr[NUM+1][NUM+1],n,i;
	cin>>n;
	if(n<=NUM){
		i=(2*n)-1;
		for(int m=0;m<n;m++){
			for(int j=0;j<(i-1)/2;j++){
				cout<<" ";
			}
			for(int k=0;k<n;k++){
				if(m>=k){
					arr[m][k]=1;
				}
				for(int i=2;i<n;i++){
					for(int j=1;j<=i-1;j++){
						arr[i][j]=arr[i-1][j-1]+arr[i-1][j];	
					}
				}
				if(arr[m][k]!=0) cout<<right<<" "<<arr[m][k];
			}
			cout<<'\n';
			i-=2;
		}
	}
}
