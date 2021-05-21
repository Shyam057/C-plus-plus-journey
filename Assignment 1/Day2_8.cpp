#include<iostream>
using namespace std;
int main(){
	int num1=45;
	int num2=56;
	cout<<num1<<"\t"<<num2;
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	cout<<endl<<num1<<"\t"<<num2;

}
