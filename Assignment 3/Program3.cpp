#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"How many even natural numbers do you want to print?"<<endl;
	cin>>num;
	int i;
	for(i=1;i<=num;i++){
	if(i%2==0){
			cout<<i<<"\t";
		}
	}
	int j;
	
	for(int j=1;j<=num*2;j++){
		if(j%2==0){
			cout<<j<<"\t";
		}
	}
}
