#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
#define NUM 8
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
	for(int i=NUM-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(data[j]>data[j+1]){
				tmp=data[j];
				data[j]=data[j+1];
				data[j+1]=tmp;
			}
		}
	}
	for(int m=0;m<NUM;m++){
		cout<<data[m]<<" ";
	}
	return 0;
	}
