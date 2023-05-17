#include<iostream>
using namespace std;
int main(){
	
// C++ program to find if an integer is positive, negative or zero
// using nested if statements

int n;
cout<<"Please Enter a Number "<<endl;
cin>>n;

if(n!=0){
	if(n>0){
		cout<<"Positive Number "<<endl;
	}
	else {
		cout<<"Negative Number "<<endl;
	}
}
	else{
		cout<<"Your Entered Number is Zero"<<endl;
	}
return 0;
}
