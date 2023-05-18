#include<iostream>
using namespace std;
int main(){


// program to find the sum of positive numbers
// if the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

int number;
int sum=0;

cout<<"Please Enter a Number "<<endl;
cin>>number;
while(number>=0){
	sum+=number;
	cout<<"Enter a Number ";
	cin>>number;
}
cout<<"The Sum=    "<<sum<<endl;

return 0;
}
