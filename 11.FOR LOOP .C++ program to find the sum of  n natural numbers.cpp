#include <iostream>
using namespace std;
int main (){
	// C++ program to find the sum of  n natural numbers
// positive integers such as 1,2,3,...n are known as natural numbers
int num,sum;
cout<<"please Enter Number"<<endl;
cin>>num;
for(int i=1;i<=num;i++){
	sum+=i;
}
cout<<"Sum =   "<<sum<<endl;

return 0;
}
