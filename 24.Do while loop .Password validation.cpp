//Password validation

#include<iostream>
using namespace std;
int main (){
	string password;
	string secret_Password="12345";
	do{
		cout<<"Please Enter Your Password "<<endl;
		cin>>password;
		if(password!=secret_Password){
		
			cout<<"Wrong password ! Please Try again"<<endl<<endl;
		}
	}
	while(password!=secret_Password);
	
	cout<<"Access Granted "<<endl<<endl;
	return 0;
}
