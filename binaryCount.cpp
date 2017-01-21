#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int count = 0;
	char binaryString[10];
	strcpy(binaryString, "1010010010");
	for(int i = 0; binaryString[i]!='\0'; i++)
	{
		if(binaryString[i]=='1')
		{
			count++;
		}
	}
	cout<<"The number of binary 1's: "<<count;
	return 0;
	
}
