#include <iostream>
#include <iomanip>
#include <ctime>
#include <windows.h>
using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
int player[8][30];
int card[52];
int card_index;
int player_card_index[8];

//撲克牌遊戲的初始化設定
//完成產生一副新牌、清空所有玩家的牌等動作
void initial()
{
     int i,j;
     for(i=0;i<=3;i++)
     {
        for(j=0;j<=12;j++)
        {
           player[i][j]=-1;
        } 
     }
     
     for(i=0;i<=51;i++)
     {
        card[i]=i;
     }
     
     for(i=0;i<=3;i++)
     {
        player_card_index[i]=0;
     }
       
     card_index = 0;
     srand( time(NULL) );
}

//將兩張撲克牌交換 
void swap2card(int a, int b)
{
   int temp;
   temp = card[a];
   card[a] = card[b];
   card[b] = temp;
}

//洗牌(以每次交換兩張牌的方式進行打亂牌的動作)
void shuffle(int n)
{
   int i;
   int sa, sb;
   for(i=1;i<=n;i++)
   {
      sa = rand() % 52;
      sb = rand() % 52;
      swap2card(sa, sb);   
   }
}

//取得撲克牌花色的字元碼 
char getsuit(int card_no)
{
   char sign[4]={6,3,4,5};
   char suit;
   
   suit = sign[ card_no/13 ];
   
   return suit;     
}

//取得撲克牌的點數 
int getpoint(int card_no)
{
   int point;
   
   point = card_no%13 + 1;   
   return point;     
}

//印出整副撲克牌，依序由第0張至第51張共52張撲克牌的花色與點數
void display_allcard()
{
   int i;
   char suit;
   int point;
   
   for(i=0;i<=51;i++)
   {
     suit = getsuit( card[i] );
     point = getpoint( card[i] );
     cout << "(" << setw(2) << i << ")card no. " << setw(2) << card[i] << " " << suit << setw(2) << point << endl; 
   }
   cout << "------------------------------------------------" << endl << endl;
}

//某一位玩家抽取一張牌
int draw(int player_no)
{
   int card_no;
   int index;
   
   card_no = card[card_index];
   card_index = card_index + 1;
   
   index = player_card_index[player_no];
   player[player_no][index] = card_no;
   player_card_index[player_no] = player_card_index[player_no] + 1;
   
   return card_no;
}

//顯示某一位玩家手中的所有牌
void display_player_card(int player_no)
{
   int i;
   int index;
   char suit;
   int point;
   
   cout << "player " << player_no << endl;
   index = player_card_index[player_no];
   for(i=0;i<index;i++)
   {
     suit = getsuit( player[player_no][i] );
     point = getpoint( player[player_no][i] );
     cout << suit << setw(2) << point << "  " ;  
   }
   cout << endl;
}

void display_card_picture(int *a, int end, bool numbers)
{
	if (end < 0) { return; }
	string l[13] = { "A ", "2 ", "3 ", "4 ", "5 ", "6 ", "7 ", "8 ", "9 ", "10", "J ", "Q ", "K " };
	char k[4] = { '\6', '\3', '\4', '\5' };
	if (numbers) {
		for (int i = 0; i <= end; i++) {
			cout << " " << left << setw(3) << i;
		}
	}
	cout << endl;
	for (int i = 0; i <= end; i++) {
		SetConsoleTextAttribute(hConsole, 240);
		cout << "╭--";
	}
	cout << "----╮" << endl;
	for (int i = 0; i <= end; i++) {
		cout << "| ";
		if( a[i] / 13==1 || a[i] / 13==2)
		{
			SetConsoleTextAttribute(hConsole, 252);	
		}
		cout << l[a[i] % 13];
		SetConsoleTextAttribute(hConsole, 240);
	}
	cout << "     |" << endl;
	for (int i = 0; i <= end; i++) {
		cout << "| ";
		if( a[i] / 13==1 || a[i] / 13==2)
		{
			SetConsoleTextAttribute(hConsole, 252);	
		}		
		cout << k[a[i] / 13] << " ";
		SetConsoleTextAttribute(hConsole, 240);
	}
	cout << "     |" << endl;
	for (int c = 0; c <= 2; c++){
		for (int i = 0; i <= end; i++) {
			cout << "|   ";
		}
		cout << "     |" << endl;
	}
	for (int i = 0; i <= end; i++) {
		cout << "╰--";
	}
	cout << "----╯" << endl;
	SetConsoleTextAttribute(hConsole, 15);
	return;
}
