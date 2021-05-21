#include<iostream>
using namespace std;
int Prime(int num){
	int i;
	for(i=2;i<num;i++){
		if(num%i==0){
			break;
		}
	}
	if(i==num){
		cout<<i<<"\t";
	}
	return 0;
}
int main(){
	int num1,num2,i;
	cout<<"Enter two numbers: "<<endl;
	cin>>num1>>num2;
	for(i=num1;i<=num2;i++){
		Prime(i);
	}
	
   return 0;
}
