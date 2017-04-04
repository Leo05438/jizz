#include <iostream>
#include <stdio.h>

using namespace std;
typedef long long gt;
int n,m,dom[1010];;
inline bool min(gt k){
	gt sum=0,wi=0;
		for(int i=0;i<n;i++){
			if(sum + dom[i] > k){
				sum=dom[i];
				wi++;
				if(wi>m) return 0;
			}
			else sum+=dom[i];
		}
	return 1;
}
int main(){
	cin>>n>>m;
	while(n!=0||m!=0){
		gt hi=0,lo=0;
		for(int i=0;i<n;i++){
			cin>>dom[i];
			hi+=(gt)dom[i];
			lo=(lo>dom[i])?lo:dom[i];
		}
		lo-=1;
		while(hi-lo!=1){
			int mid=(lo+hi)/2;
			if(min(mid)) hi=mid;
			else lo=mid;
		}
		cout<<hi<<'\n';
		cin>>n>>m;
	}
}
