#include<bits\stdc++.h>
#include<windows.h>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int key,m,a[n];
		for(int i=0;i<n;i++){
			cin>>m;
			m=a[i];
		}
		cin>>key;
		int lo=0,hi=n-1;
		while(lo<=hi){
			int mid=(hi+lo)/2;
			if(mid!=key) (key<a[mid])?hi=mid-1:lo=mid+1;
			else {
				cout<<"FOUND!"<<endl;
				break;
			}
		}
		Sleep(5000);
	}
}
