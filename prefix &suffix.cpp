#include<iostream>
#include<cstring>
using namespace std;
string a,b;
int len1,len2;
int compare(int len){
	for(int i=0;i<len;i++){
		if(a[i]!=b[len2-len+i]) return 0;
	}
	return 1;
}
int main(){
	while(cin>>a>>b){
		int k=0;
		len1=a.length();
		len2=b.length();
		for(int i=1;i<=len1&&i<=len2;i++){
			if(compare(i)) k=i;
		}
		cout<<k<<endl;
	}
}

