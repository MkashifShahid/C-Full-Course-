//Calculating the sum of numbers entered by the user
#include<iostream>
using namespace std;
int main(){
int num,sum=0;

do{
  cout<<"Please Enter a Number (enter 0 to exit) "<<endl;
  cin>>num;
  sum+=num;	
//  if(num<=0){
//  	cout<<"INVALID PLEAE TRY AGAIN "<<endl;
  }
while(num!=0);
cout<<"The Sum= "<<sum<<endl<<endl;

//cout<<"Please Enter Zero 0 or Negative integer to exit program"<<endl;

return 0;
}
