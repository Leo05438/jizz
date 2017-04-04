#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;
int main(){
	char str[100000];
	while(cin.getline(str,100000)){
		for(int i=0;i<100000;i++){
			if(str[i]!='\0'){
				str[i]=(char)(str[i]-7);
				cout<<str[i];
			}
			else if(str[i]=='\0'){
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}
