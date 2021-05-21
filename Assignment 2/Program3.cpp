#include<iostream>
using namespace std;
int main(){ while(1){

	long int num;
	cout<<endl<<"Enter a number"<<endl;
	cin>>num;
	int len=0;
	long int num2,num1;
	num2=num1=num;
	while(num){
		num=num/10;
		len++;
		
		
	}
	
	while(len){
		int rem=num1%10;
		num1=num1/10;
		len--;
		
		if(rem<8){
			continue;
			
		}
		else{
			cout<<endl<<"Not an octal number"<<endl;
			break;
		}
		
	}
	if(num1==0){
		cout<<endl<<num2<<"is an octal number";
	}
}
}
