#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"How many numbers do you like to print? "<<endl;
	cin>>num;
	cout<<"Here are the numbers that you wanted to print";
	int i;
	for (i=1;i<=num;i++){
		cout<<i<<endl;
	}
	return 0;
}
