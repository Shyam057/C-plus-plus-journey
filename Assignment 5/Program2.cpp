#include<iostream>
using namespace std;
int Prime(int num){
	int i;
	for(i=2;i<num;i++){
		if(num%i==0){
			break;
		}
	}
	if(i==num){
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
