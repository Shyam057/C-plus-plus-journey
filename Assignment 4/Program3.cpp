#include<iostream>
using namespace std;
int main(){
	int num,i,j;
	cout<<"Enter a number"<<endl;
	cin>>num;
	int num1=0,num2=1;
	
    int next=num1+num2;
    
	for(int i=1;i<=num;i++){
	cout<<next<<"\t";
	num1=num2;
	num2=next;
	next=num1+num2;
	
	
	}
	
	

		
		
	}
