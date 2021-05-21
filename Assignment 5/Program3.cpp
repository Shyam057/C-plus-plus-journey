#include<iostream>
using namespace std;
int Prime(int num){
	
	if(num%2==0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	while(1){
	
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<Prime(n)<<endl;
	
	
}
return 0;


}
