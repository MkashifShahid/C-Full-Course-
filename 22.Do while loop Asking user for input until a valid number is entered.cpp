//Asking user for input until a valid number is entered
#include<iostream>
using namespace std;
int main(){
	int num;
	do{
	
		cout<<"please Enter a positive Number"<<endl;
		cin>>num;
		if(num<=0){
			cout<<"Invalid Input.Please try again."<<endl<<endl;
		}
	}
	while(num<=0);
	cout<<"You Entered:"<<num<<endl;
	
	return 0;
	
}
