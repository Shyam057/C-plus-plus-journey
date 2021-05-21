#include<iostream>
using namespace std;
int main(){
	long int num;
	cout<<"Enetr a number"<<endl;
	cout<<num<<endl;
	cin>>num;
	int count=0;
	while(num!=0){
		num/=10;
		count++;
	}
	cout<<count;
}
