#include<bits/stdc++.h>
#include "game.h"
using namespace std;
int main(){
	int k,tmp1,tmp2,tmp3,tmp4;
	int j=0,p=0,u=0,s=0;
	int point1[50],point2[50],point3[50],point4[50],point5[4];
	char g='s';
	initial();
	shuffle(100);
	for(int l=0;l<4;l++){
		draw(5);
	}
	for(int h=0;h<4;h++){
		for(k=0;k<6;k++){
			draw(h)%13+1;	
		}	
	}
	for(int m=0;m<2;m++){			
		for(int i=0;i<4;i++){
			while(g=='s'){
				char t;
				int n1,n2;
				display_card_picture(player[5], player_card_index[5]-1-p, 1);
				cout<<"============================="<<"莊家/玩家"<<i<<"分割線=========================="<<endl;			
				display_card_picture(player[i], player_card_index[i]-1-m, 1);
			begin:
				cout<<'\n'<<"player"<<i<<"是否要吃牌?(y/n)";	
				cin>>t;
				if(t=='y'||t=='Y'){	
					cout<<"你的第幾張牌?(數字)";
					cin>>n1;
					cout<<"莊家的第幾張牌?(數字)";
					cin>>n2;
					if((player[5][n2]%13+1)+(player[i][n1]%13+1)==10){
						tmp1=player[5][n2];
						player[5][n2]=player[5][3];
						player[5][3]=tmp1;
						tmp2=player[5][3];
						player[5][3]=draw(5);
						player[5][3+1+p]=tmp2;
						tmp3=player[i][n1];
						player[i][n1]=player[i][5];
						player[i][5]=tmp3;
						tmp4=player[i][5];
						player[i][5]=draw(i);
						player[i][5+1+m]=tmp4;
						tmp1=0,tmp2=0,tmp3=0,tmp4=0;
						system("CLS");
						break;
					}
					else if((player[5][n2]%13+1)>=10&&(player[5][n2]%13+1)==(player[i][n1]%13+1)){
						tmp1=player[5][n2];
						player[5][n2]=player[5][3];
						player[5][3]=tmp1;
						tmp2=player[5][3];
						player[5][3]=draw(5);
						player[5][3+1+p]=tmp2;
						tmp3=player[i][n1];
						player[i][n1]=player[i][5];
						player[i][5]=tmp3;
						tmp4=player[i][5];
						player[i][5]=draw(i);
						player[i][5+1+m]=tmp4;
						tmp1=0,tmp2=0,tmp3=0,tmp4=0;
						system("CLS");
						break;
					}
					else{
							goto begin;	
					}
				}
				else if(t=='n'){
					system("CLS");
					player[5][3+1+p]=draw(5);
					player[i][5+1+m]=draw(i);
					break;
				}
				else{
					goto begin;
				}
			}
			p++;
		}	
	}
	system("CLS");
	for(int a=4;a<12;a++){
		if((player[5][a])/13==1||(player[5][a])/13==2){
			if((player[5][a]%13+1)>=10){
				point1[s]=10;
			}
			else if((player[5][a]%13+1)<10){
				point1[s]=player[5][a]%13+1;
			}
		}
		else{
			point1[s]=0;
		}
		s++;
	}
	for(int b=0;b<8;b++){
		int r=b%4;
		switch(r){
			case 0:
				point2[r]+=point1[b];
			case 1:
				point2[r]+=point1[b];
			case 2:
				point2[r]+=point1[b];
			case 3:
				point2[r]+=point1[b];
		}
	}
	for(int c=0;c<4;c++){
		for(int d=6;d<=7;d++){
			if((player[c][d])/13==1||(player[c][d])/13==2){
				if((player[c][d]%13+1)>=10){
					point3[j]=10;
				}
				else if((player[c][d]%13+1)<10){
					point3[j]=player[c][d]%13+1;
				}
			}
			else{
				point3[j]=0;
			}
			j++;
		}
		point4[u]=point3[j-1]+point3[j-2];
		u++;
	}
	for(int e=0;e<4;e++){
		point5[e]=point2[e]+point4[e];
	}
	int max=point5[0];
	int mp=0;
	for(int f=0;f<4;f++){
		if(max<point5[f]){
			max=point5[f];
			mp=f;
		}
	}
	cout<<"勝者為player"<<mp<<" "<<"點數為"<<max; 
	return 0;
}
