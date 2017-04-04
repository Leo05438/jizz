#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int GCD(int a,int b){
	if(b==0)return a;
	else return GCD(b,a%b);
}
int main(){
	int n;
	while(cin>>n){
		int all=0,count=0,m;
		int num[100];
		if(n==0) break;
		for(int i=0;i<n;i++){
			cin>>m;
			num[i]=m;
		}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				all++;
				if(GCD(num[i],num[j])==1) count++;
			}
		}
		if(count==0) cout<<"No estimate for this data set."<<endl;
		else cout<<fixed<<setprecision(6)<<sqrt(6.0*all/count)<<'\n';	
	}
	return 0;
}
