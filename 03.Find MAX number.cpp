#include<iostream>
using namespace std;
int main()
{
	//Find Max Number Using Nested Loop 
	
	int a,b,c;
	cout<<"Please Enter First  Number"<<endl;
	cin>>a;
	cout<<"Please Enter Second   Number"<<endl;
	cin>>b;
	cout<<"Please Enter Third  Number"<<endl;
	cin>>c;
	
	if(a>b){
		if(a>c){
			cout<<a<<endl;
		}
		else{
			cout<<c<<endl;
		}
	}
		else{
			if(b>c){
				cout<<b<<endl;
		}
			else {
				cout<<"The Maximum Number=  "<<c<<endl;
			}
		}
	return 0;
}
