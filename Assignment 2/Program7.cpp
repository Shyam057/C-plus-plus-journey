#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num;
	cin>>num;
	if(num%2==0){
		cout<<num<<" is even number"<<endl;
	}
	else{
		cout<<num<<" is odd number"<<endl;
	}
	getch();
	return 0;
}
