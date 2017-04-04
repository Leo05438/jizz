#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	while(getline(cin,s)){
		bool j=0; 
		int len=s.length();
		for(int i=0;i<len/2;i++){
			if(s[i]!=s[len-1-i]) j=1;
		}
		if(j==1) cout<<"not palindrome"<<endl;
		else cout<<"palindrome"<<endl;
	}
}
