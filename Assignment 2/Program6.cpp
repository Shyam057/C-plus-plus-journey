#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;
	if(num>0){
		cout<<num<<" is positive number.";
	}
	else if(num==0){
		cout<<num<<" is zero";
		
	}
	else
	{
		cout<<num<<" is negative number";
	}
	return 0;
}
