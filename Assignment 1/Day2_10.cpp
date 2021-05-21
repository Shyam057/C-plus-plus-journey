#include<iostream>
using namespace std;
int main(){
	float princ,time,rate;
	float interest;
	cout<<"Enter Principal time, and rate "<<endl;
	cin>>princ>>time>>rate;
	interest=(princ*time*rate)/100;
	cout<<"The interest is "<<interest;
	return 0;
}
