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
	cout<<"�ǥͬ�: "<<me.name<<endl;
	cout<<"�ƾǦ��Z�O: "<<me.grade<<endl;
}
void in(s *a){
	cout<<"�ǥͩm�W: ";
	getline(cin,a->name);
	cout<<"����ƾǦ��Z: ";
	cin>>a->grade;
	cin.get();
}
s *add(s *a){
	a->grade=a->grade+5;
	return a;
} 
