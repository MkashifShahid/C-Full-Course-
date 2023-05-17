#include<iostream>
using namespace std;
int main(){
	
	// Program to check whether an integer is positive, negative or zero
	
	int n;
	cout<<"Please Enter integer"<<endl;
	cin>>n;
	
	if(n>0){
		cout<<"Positive Number "<<n<<endl;
	}
	else if(n<0){
		cout<<"Negative Number"<<n<<endl;
	}
	else {
		cout<<"You Entered Zero"<<endl;
	}
	return 0;
}
