#include <iostream>
using namespace std;
int main(){
	char s[5000];
	cin>>s;
	for (int i=0; i<26; i++){
    	int c = 0;
        for (int j=0;s[j]; j++){
            if (s[j] == 'a' + i)
                c++;
    	}
    	if(c!=0){
    		cout << (char)('a' + i) << " " << c<<endl;
		}
		}
}
	
