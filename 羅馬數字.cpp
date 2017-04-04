#include <iostream>
#include <string>
using namespace std;
int num(char a){
	int deg=0;
	switch(a){
			case 'I':
				deg=1;
				break;
			case 'V':
				deg=5;
				break;
			case 'X':
				deg=10;
				break;
			case 'L':
				deg=50;
				break;
			case 'C':
				deg=100;
				break;
			case 'D':
				deg=500;
				break;
			case 'M':
				deg=1000;
				break;
	}
	return deg;
}
int main(){
	int degarr[100],degarr2[100],lp=0;
	char s1[100],s2[100],g;	
		while(cin>>s1){
			int sum1=0;
			int sum2=0;
			if(s1[0]=='#') break;	
			else{
				for(int i=0;i<100;i++){
					if(s1[i]=='\0'){
						lp=i-1;
						break;
					}
					degarr[i]=num(s1[i]);
				}
				for(int k=0;k<lp;k++){
					if(lp>0){
						if(degarr[k]<degarr[k+1]){
							degarr[k]=degarr[k]*(-1);
						}
						else{
							degarr[k]=degarr[k];
						}
						sum1+=degarr[k];	
						}
					else if(lp==0){
						sum1=degarr[0];
					}	
				}
				sum1=sum1+degarr[lp];
				cin>>s2;
				for(int i=0;i<100;i++){
					if(s2[i]=='\0'){
						lp=i-1;
						break;
					}
					degarr2[i]=num(s2[i]);
				}
				for(int k=0;k<lp;k++){
					if(lp>0){
						if(degarr2[k]<degarr2[k+1]){
							degarr2[k]=degarr2[k]*(-1);
						}
						else{
							degarr2[k]=degarr2[k];
						}
						sum2+=degarr2[k];	
					}
					else if(lp==0){
						sum2=degarr2[0];
					}	
				}
				sum2=sum2+degarr2[lp];
				int a;
				if(sum1>sum2){
					a=(sum1-sum2);
				}
				else if(sum1<sum2){
					a=(sum2-sum1);
				}
				else if(sum1==sum2){
					cout<<"ZERO"<<endl;
					a=0;
				}
				int m=a;
				if(a>=1000){
					for(int j=0;j<a/1000;j++){
						cout<<'M';
						m-=1000;
					}
					a=m;
				}
				if(a>=100){
					if(a>500){
						if(a/100==9){
							cout<<"CM";
							a-=900;	
						}
						else{
							cout<<'D';
							m-=500;
							for(int j=0;j<a/100-5;j++){
								cout<<'C';
								m-=100;
							}
							a=m;
						}
					}	
					else if(a==500){
						cout<<'D';
						a-=500;
					}
					else{
						if(a/100==4){
							cout<<"CD";
							a-=400;
						}
						else{
							for(int j=0;j<a/100;j++){
								cout<<'C';
								m-=100;
							}
							a=m;	
						}
					}
				}
				if(a>=10){
					if(a/10>5){
						if(a/10==9){
							cout<<"XC";
							a-=90;
						}	
						else{
							cout<<'L';
							m-=50;
							for(int j=0;j<a/10-5;j++){
								cout<<'X';
								m-=10;
							}
							a=m;	
						}
					}
					else if(a==50){
						cout<<'L';
						a-=50;
					}
					else{
						if(a/10==4){
							cout<<"XL";
							a-=40;
						}
						else{
							for(int j=0;j<a/10;j++){
								cout<<'X';
								m-=10;
							}
							a=m;	
						}
					}
				}
				if(a>0){
					if(a>5){
						if(a==9){
							cout<<"IX";
							a-=9;
						}	
						else{
							cout<<'V';
							m-=5;
							for(int j=0;j<a-5;j++){
								cout<<'I';
								m-=1;
							}
							a=m;	
						}
					}
					else if(a==5){
						cout<<'V';
						a-=5;
					}
					else{
						if(a==4){
							cout<<"IV";
							a-=4;
						}
						else{
							for(int j=0;j<a;j++){
								cout<<'I';
								m-=1;
							}
							a=m;	
						}
					}
				}
			}
		cout<<'\n';
		}
	return 0;
}
