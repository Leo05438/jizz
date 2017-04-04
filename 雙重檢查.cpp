#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	string s;
	while(cin>>n){
		int suml1=0,suml2=0,sumr1=0,sumr2=0,sumall=0;
		for(int i=0;i<n;i++){
			cin>>s[i];
			(s[i]=='j')?suml1++:suml2++;
			if(suml1>suml2) {
				suml1--;
				s[i]='r';
			}
		} 
		for(int i=n-1;i>=0;i--){
			if(s[i]=='j') sumr1++;
			else if(s[i]=='p') sumr2++;
			if(sumr1>sumr2) {
				sumr1--;
				s[i]='r';
			}
		}
		for(int i=0;i<n;i++){
			if(s[i]!='r') sumall++;
		}
		cout<<sumall<<endl;
	}
}
