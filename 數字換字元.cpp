#include<iostream>
#include <sstream>
using namespace std;
string s1,s2;
stringstream ss;
int main(){
	int a,b;
	cin>>s1>>s2;
	ss<<s1;
	ss>>a;
	ss.clear();
	ss.str("");
	ss<<s2;
	ss>>b;
	if(a>b){
		cout<<s1<<'\n';
	}
	else if(a<b){
		cout<<s2<<'\n';
	}
	else{
		for(int j=0;;j++){
			if(s1[j]>s2[j]){
				cout<<s1<<'\n';
				break;
			}
			else if(s1[j]<s2[j]){
				cout<<s2<<">"<<s1<<'\n';
				break;
				
			}
		}
	}
return 0;
}
