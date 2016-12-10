#include<iostream>
using namespace std;

int get_sum(int num1, int num2){
	return num1+num2;
	
}
int get_diff(int num1, int num2){
	return num1-num2;
}
int get_prod(int num1, int num2){
	return num1*num2;
}
int get_quo(int num1, int num2){
	return num1/num2;
}

int main()
{
	int num1,num2;
	cout<<"Enter 1st number: ";
	cin>>num1;
	cout<<"Enter 2nd number: ";
	cin>>num2;
	

	cout<<get_sum(num1, num2)<<endl;
	cout<<get_diff(num1, num2)<<endl;
	cout<<get_prod(num1, num2)<<endl;
	cout<<get_quo(num1, num2)<<endl;
	return 0;
}
