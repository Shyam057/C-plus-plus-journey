#include<iostream>
using namespace std;
int main(){
	int num1,num2,h;
	cout<<"Enter two numbers: "<<endl;
	cin>>num1>>num2;
	int i;
	for(i=num1;i!=0;i--){
		if(num1%i==0 && num2%i==0){
			cout<<i<<" is the highest common factor."<<endl;
			break;
		}
	}
	
}

