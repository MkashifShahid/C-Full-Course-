#include<iostream>
using namespace std;
int main(){
	
//	Write a c++ program to solve the following series: 5 + 8 + 11 + .... + 50
int sum=0;
for(int i=5;i<50;i+=3){
	
	sum+=i;
}
cout<<"The Sum=   "<<sum<<endl;
} 
