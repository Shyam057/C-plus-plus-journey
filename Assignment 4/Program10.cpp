#include<iostream>
using namespace std;
int main(){
	while(1){
	
	int num;
	cout<<"Enter the decimal number"<<endl;
	cin>>num;
	int rem;
	int oct=0;
	int base=1;
	while(num!=0){
		rem=num%8;
		num=num/8;
		
		oct=oct+base*rem;
		base=base*10;
	}
	cout<<oct<<endl;
}
}

