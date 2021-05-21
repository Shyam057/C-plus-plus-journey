#include<iostream>
#include<math.h>
using namespace std;
int main(){
	while(1){
	
	int c1,c2,c3;
	cout<<"Enter the coefficient of the equation"<<endl;
	cin>>c1>>c2>>c3;
	if((c2*c2)>(4*c1*c3)){

	if (((c2*c2)-(4*c1*c3))==0)
	{
		cout<<"The roots are real and equal"<<endl;
		
	}
	else
	{
		cout<<"The roots are unequal and real"<<endl;
	}
	}
	else{
		cout<<"Roots are imaginary"<<endl;
	}
}
	
	
}
