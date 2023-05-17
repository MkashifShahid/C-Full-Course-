#include<iostream>
using namespace std;
int main(){
	
int savings;
cout<<"please enter saving Amount"<<endl;
cin>>savings;

if(savings>5000){
	if(savings>10000){
		cout<<"Roadtrip with Muskan"<<endl;
}	else{
		cout<<"Shopping With Muskan "<<endl;
	}
}
else if(savings>2000){
	cout<<"Shopping with Neha "<<endl;
}
else{
	cout<<"Enjoy With Friends"<<endl;
}														
	return 0;
}
