#include<iostream>
using namespace std;
int main(){
	while(1){
	
	int num;
	cout<<"Enter the decimal number"<<endl;
	cin>>num;
	int rem;
	int bin=0;
	int base=1;
	while(num!=0){
		rem=num%2;
		num=num/2;
		
		bin=bin+base*rem;
		base=base*10;
	}
	cout<<bin<<endl;
}
}

