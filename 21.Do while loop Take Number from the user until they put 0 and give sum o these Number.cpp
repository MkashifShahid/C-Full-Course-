#include<iostream>
using namespace std;
int main(){
	int num,sum=0;
	do{
		cout<<"Please Enter Number "<<endl;
		cin>>num;
		sum=sum+num;
		
//		OR 
//		sum+=number;
//		+= called Addition operator
	}
	while(num!=0); // jub tak user zero 0 enter nahi kry ga program exit nahi ho ga 
	cout<<"The Sum is Equal To=  "<<sum<<endl;
	
	return 0;
}
