#include <iostream>

using namespace std;

int getSum (int x,int y)
{
	return x+y;
}

int getDifference (int x,int y)
{
	return x-y;
}

int getProduct (int x,int y)
{
	return x*y;
}

int getQuotient (int x,int y)
{
	return x/y;
}


int main ()
{
	int num1,num2;
	
	cout << "Enter num 1: ";
	cin >> num1;
	
	cout << "Enter num 2: ";
	cin >> num2;
	
	
	cout << "Sum is: " << getSum(num1,num2) << endl;
	cout << "Difference is: " << getDifference(num1,num2) << endl;
	cout << "Product is: " << getProduct(num1,num2) << endl;
	cout << "Quotient is: " << getQuotient(num1,num2) << endl;
	
	return 0;
}
