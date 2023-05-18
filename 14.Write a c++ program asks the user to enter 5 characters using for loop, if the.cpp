// Write a c++ program asks the user to enter 5 characters using for loop, if the 
//user enters 'n' exit the loop.

#include<iostream>
using namespace std;
int main(){
	char ch;
	for(int i=1; i<5;i++){
		cout<<"Please Enter Number "<<endl;
		cin>>ch;
		if(ch=='n'){
			break;
		}
	}
}
