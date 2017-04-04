#include<iostream>
#include<string>
using namespace std;
int main(){
	int j=0;
	string s;
	while(cin>>s){
		for(int i=0;s[i];i++){
			if(s[i]!='\0')j++;
		}
		j=j/2;
		cout<<j<<'\n';
		j=0;
	}
}
