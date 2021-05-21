#include<iostream>
using namespace std;
int main(){
	int num,sum,i;
	cout<<"Enter a numbe:";
	cin>>num;
	sum=0;
	for(i=1;i<=num;i++){
		sum=sum+i;
	
	}
	cout<<"Sum of first "<<num<<" numbers is"<<sum;
	return 0;
}
