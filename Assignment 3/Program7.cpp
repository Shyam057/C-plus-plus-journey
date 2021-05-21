#include<iostream>
using namespace std;
int main(){
	int i,num,sum,sq;
	cout<<"Please enter the number: "<<endl;
	cin>>num;
	int nextSum=(num)*(num+1)*(2*num+1)/6;
	cout<<nextSum<<endl;
	sum=0;
	for(i=1;i<=num;i++){
		sq=i*i;
		sum=sum+sq;
	}
	cout<<"Total sum is "<<sum;
}
