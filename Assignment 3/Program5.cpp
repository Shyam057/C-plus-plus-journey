#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number";
	cin>>num;
	int i;
	for(i=num;i!=0;i--){
		if(i%2!=0){
			cout<<i<<"\t";		}
	}
}
