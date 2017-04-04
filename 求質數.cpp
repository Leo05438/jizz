#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k=0;
	cin>>n;
	for(int j=2;j<=n;j++){
		bool m=1;
		for(int i=2;i<j;i++){
			if(i!=j){
				if(j%i==0){	
					m=0;
					break;
				}	
			}	
		}
		if(m==1){
			cout<<j<<",";
			k++;
		}
	}
	cout<<'\n'<<k;
	return 0;
} 
