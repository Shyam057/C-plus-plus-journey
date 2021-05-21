#include<iostream>
using namespace std;
float area(int);
int main(){
	float are;
	int radius;
	cout<<"Enter radius of Circle "<<endl;
	cin>>radius;
	are=area(radius);
	cout<<are<<endl;
	return 0;
	
}
float area(int r)
{
	return 3.14*r*r;
}
