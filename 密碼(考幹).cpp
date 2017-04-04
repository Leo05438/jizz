#include<iostream>
#include<math.h>
#include<ctime>
using namespace std;
long long int fac(int a){
	if(a==0||a==1) a=1; 
	else{
		for(int i=a-1;i>0;i--){
			a*=i;
		}
	}
	return a;
}
long long int combine(int a,int b){
	long long int p=0;
	p=fac(a)/(fac(b)*fac(a-b));
	return p;
}
int main(){
	long long int n,m,l;
	while(cin>>n>>l){
		long long int k=0,result=0;
		int code[n+1];
		for(int i=0;i<n;i++){
			cin>>m;
			code[i]=m;
			if(m==-1) k++;
		}
		if(k==1||k==0) result=1;
		else{
			for(int i=0;i<=k;i++){
				result+=(pow(-1,i)*combine(k,i)*fac(k-i));
			}
		}
		cout<<result%l<<"\n";
	}	
	return 0;
} 
