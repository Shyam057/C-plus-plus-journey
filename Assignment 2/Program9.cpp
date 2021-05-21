#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"Enter 3 numbers: ";
	cin>>num1>>num2>>num3;
	if(num1>num2){
		if(num1>num3){
			
			cout<<num1<<" is greates among three numbers.";
		}
		else{
			cout<<num3<<" is greatest among three numbers.";
		}
	}
	else{
		if(num2>num3){
			cout<<num2<<" is greates among three numbers.";
		}
		else
		{
		cout<<num3<<" is greatest among three numbers.";	
		}
	}
	return 0;
}
