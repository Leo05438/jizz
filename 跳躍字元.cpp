#include <bits/stdc++.h>
using namespace std;
int main(){
	char s[501];
	cin.getline(s,501);
	cout<<s[0];
	for(int i=4;i<=501;i++){
		if(s[i]!='\0'){
			if(i%4==0){
				cout<<s[i];
			}
		}
		else if(s[i]=='\0'){
			break;
		}
	}
}
