#include<iostream>
using namespace std;

struct Person{
	int toes;
	int knees;
	int shoulder;
	int head;
};
int main()
{
	Person p;
	
	cin>> p.toes;
	cin >>p.knees;
	cin >> p.shoulder;
	cin >> p.head;
	
	cout<<p.toes<<endl;
	cout<<p.knees<<endl;
	cout<<p.shoulder<<endl;
	cout<<p.head<<endl;
	
	return 0;
}
