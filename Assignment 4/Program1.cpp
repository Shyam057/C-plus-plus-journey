#include<iostream>
using namespace std;
int main(){
	while(1){
	
	
	int num,i;
	cout<<"Enter a number"<<endl;
	cin>>num;
	for (i=2;i<num;i++){
		if(num%i==0){
			break;
			
		}
	}
	if(num==i){
		cout<<num<<" is prime number"<<endl;
		
	}
	else{
		cout<<num<<" is not prime number"<<endl;
	}
}
}
