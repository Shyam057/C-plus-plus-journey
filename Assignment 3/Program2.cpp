#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"How many numbers do you like to print? "<<endl;
	cin>>num;
	cout<<"Here are the numbers that you wanted to print";
	int i;
	for (i=num;i!=0;i--){
		cout<<endl<<i<<endl;
	}
	return 0;
}
