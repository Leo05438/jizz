#include<bits/stdc++.h>
#include<math.h>
#include"game.h"
using namespace std;
int main(){
	int k;
	int max=0;
	int mp=0;
	int sum=0;
	char g;
	int sum2[8];
	int tmp;
	initial();
	display_allcard();
	shuffle(10000);
	display_allcard();
	for(int i=1;i<=4;i++){
		sum=0;
		g='y';
		while(g=='y'||g=='Y'&&sum<21){
			k=draw(i)%13+1;
			display_card_picture(player[i], player_card_index[i]-1, 1);
			if(k>10) {
				k=10;
			}
			else if(k==1&&sum<=10){
				k=11;
			}
			sum=sum+k;
			sum2[i]=sum;
			if(sum>21){	
				cout<<"player"<<i<<"你爆了"<<endl;
				sum2[i]=0;
				break;
			}  
			else if(sum==21) cout<<"Black Jack"<<endl;
			else	cout<<"player"<<i<<"點數和:"<<" "<< sum <<endl;
			do{       
			cout << "是否繼續要牌(y/n)?" ;
			cin >>g;
			} while( (g!='Y') && (g!='y') && (g!='N') && (g!='n') );
		}
	}
	for(int m=1;m<=4;m++){
		cout<<"player"<<m<<" ";
		cout<<sum2[m]<<"\n";
	}
	max=sum2[1];
	mp=1; 
	for(int j=2;j<=4;j++){
		if(sum2[j]>max){
			max=sum2[j];
			mp=j;
		}
		else if(sum2[j]==max){
			max=sum2[1];
			mp=1;
		}
	}
	cout<<"勝利者是"<<"player"<<mp<<" "<<"點數為"<<max<<endl; 
			
	system("pause");
	return 0;
}
