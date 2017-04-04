#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
#define NUM 10
int main(){
	srand(time(NULL));
	int tmp;
	int max;
	int mp;
	int data[NUM];
	for(int i=0;i<NUM;i++){
		data[i]=rand()%101;
		cout<<data[i]<<" ";
		}
	cout<<"\n";
	cout<<"======================================================================="<<endl;
	for(int m=0;m<NUM-1;m++){
		max=data[m];
		mp=m;
		for(int j=m+1;j<NUM;j++){
			if(max<data[j]) {
			max=data[j];
			mp=j;
			}
		}
		tmp=data[m];
		data[m]=data[mp];
		data[mp]=tmp;
	}
	for(int k=0;k<NUM;k++){
		cout<<data[k]<<" "; 
	}		
	return 0;
	}
