#include<iostream>
using namespace std;
int k=1;
void hanoi(int m,int start,int temp,int dest){
	if(m==1){
		 cout<<"#"<<k<<" : "<<"move the dish from #"<<start<< " to #"<<dest<<endl;
		 k++;
	}
	else{
		hanoi(m-1,start,dest,temp);
		cout<<"#"<<k<<" : "<<"move the dish from #"<<start<< " to #"<<dest<<endl;
		k++;
		hanoi(m-1,temp,start,dest);
	}
}
int main(){
	int n;
	while(cin>>n){
		hanoi(n,1,2,3);
		k=1;
	}
	return 0;
}
