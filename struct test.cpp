#include<bits\stdc++.h>
using namespace std;
typedef struct _s{
	string name;
	int grade;
}s;
void in(s *);
s *add(s *);
int main(){
	s me,*pi;
	pi=&me;
	in(pi);
	pi=add(pi);
	cout<<"學生為: "<<me.name<<endl;
	cout<<"數學成績是: "<<me.grade<<endl;
}
void in(s *a){
	cout<<"學生姓名: ";
	getline(cin,a->name);
	cout<<"原先數學成績: ";
	cin>>a->grade;
	cin.get();
}
s *add(s *a){
	a->grade=a->grade+5;
	return a;
} 
