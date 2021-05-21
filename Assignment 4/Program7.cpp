#include<iostream>
using namespace std;
int main(){
	long int num1;
	cout<<"Enter a number"<<endl;
	cin>>num1;
	int dig;
	int largDig=0;
	while(num1!=0){
		dig=num1%10;
		num1/=10;
		if(Dig<dig){
			largDig=dig;
		}
		
	}
	cout<<largDig<<endl;
	
}
