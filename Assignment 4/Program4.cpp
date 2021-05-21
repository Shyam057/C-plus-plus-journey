#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Enter two numbers:"<<endl;
	cin>>num1>>num2;
	int big;
	if(num1>num2){
		big=num1;
	}
	else{
		big=num2;
	}
	int  i;
	
	for(i=big;i<=num1*num2;i++){
		if(i%num1==0 && i%num2==0){
			cout<<i<<" is the LCM of "<<num1<<" , "<<num2<<endl;
			break;
		}
		
	}
}
