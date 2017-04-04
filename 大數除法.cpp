#include<iostream>
using namespace std;
int mul(int* arr,int k,int t[101]){
	for(int i=0;i<100;i++){
		t[i]=k*arr[i];
	}
	for(int i=0;i<101;i++){
		t[i+1]+=t[i]/10;
		t[i]=t[i]%10;
	}
}
int largerthan(int a[100],int b[100]){
	for(int i=99;i>=0;i--){
		if(a[i]!=b[i]) {
			if(a[i]>b[i]) return 1;	
		}
	}
	return 0;
}
int sub(int* a,int b[100],int* c){
	for(int i=0;i<100;i++){
		c[i]=a[i]-b[i];
	}
	for(int i=0;i<100;i++){
		if(c[i]<0){
			c[i+1]--;
			c[i]+=10;
		}
		cout<<c[i];
	}
}
int main(){
	int n,m,a[100],b[100],t[100],c[100];
	while(cin>>a[100]){
		cin>>b[100];
		for(int i=0;i<100;i++){
			for(int k=9;k>0;k--){
				mul(b+i,k,t);
			}
			if(largerthan(a+i,t)){
				sub(a+i,t,c+i);
				break;
			}
			
		}
	}
	
}
	
