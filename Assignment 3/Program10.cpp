#include<iostream>
using namespace std;
int main(){
	long int num;
	cout<<"Enetr a number"<<endl;
	cout<<num<<endl;
	cin>>num;
	int count=0;
	int sum=0;
	int rem=0;
	while(num!=0){
		rem=num%10;
		num/=10;
		sum=sum+rem;
		
		count++;
	}
	cout<<count;
	cout<<"Sum of digits :"<<sum;
}
