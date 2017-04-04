#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	srand(time(NULL));
	float avg=0;
	int sum=0;
	float avg2=0;
	int sum2;
	int score[8][8];
	for(int i=1;i<=5;i++){
		cout<<"student"<<i<<"="<<" ";
		for(int j=1;j<=3;j++){	
			score[i][j]=rand()%101;
			cout<<"NO."<<j<<":"<<score[i][j]<<" ";
			sum=sum+score[i][j];
		}
		cout<<"總分為="<< sum<<" ";
		avg=sum/3.0;
		cout<<"平均為="<<avg<<"\n";
		sum=0;
	}
	for(int a=1;a<4;a++){
		for(int b=1;b<6;b++){
			sum2=sum2+score[b][a];
		}
		avg2=sum2/5.0;
		cout<<"NO."<<a<<"總分為="<< sum2<<" ";
		cout<<"平均為="<<avg2<<"\n";
		sum2=0;
	}
	return 0;
	}                                                                                                                                                                                                                                                                                                                                                                                                                                                                        

