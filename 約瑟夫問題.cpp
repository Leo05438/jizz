#include <iostream>
using namespace std;
int josephus(int len,int k){
	if(len>1) return (josephus(len-1,k)+k)%len;
	else return k;
}
int main(){
	int LEN;
	while(cin>>LEN){
		cout<<josephus(LEN,2)+1<<'\n';
	}
}
