#include <stdio.h>
#include<iostream>
using namespace std;
main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r");

    //read file into array
    int i,num;
    int numberArray[5];
    cout<<"Enter 5 numbers: ";
    for(i=0; i<5; i++){
    	cin>>numberArray[i];
	}
    fclose(myFile);
    myFile = fopen("sample1.txt", "w");
    for(i= 4; i >=0; i--){	
       fprintf(myFile, "%d\n", numberArray[i]);
}
   
}
