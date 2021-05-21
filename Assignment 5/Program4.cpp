#include<iostream>
using namespace std;
int nextPrime(int num){
	int i=2;
	int prime;
	int oldnum=num;
	while(1){
		num=num+1;
		for(i=2;i<num;i++){
			if(num%i==0){
				break;
			}
		}
		if(i==num && num>oldnum )
		{
			return i;
		}
	}
	
}
int main(){
	while(1){
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;
	cout<<nextPrime(num)<<endl;
}
	 return 0;
	
}
