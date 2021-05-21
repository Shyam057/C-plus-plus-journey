#include<iostream>
using namespace std;
int main(){
while(1){

	int side1,side2,side3;
	cout<<"Enter the sides of the triangle: "<<endl;
	cin>>side1>>side2>>side3;
	int firstS=side1*side1;
	int secondS=side2*side2;
	int thirdS=side3*side3;
	if(((firstS+secondS)==thirdS)||((firstS+thirdS)==secondS)||((thirdS+secondS)==firstS)){
		cout<<side1<<" "<<side2<<" "<<side3<<" "<<" are Pythagorous triplet"<<endl;
	}
	else{
		cout<<side1<<" "<<side2<<" "<<side3<<" "<<" are not Pythagorous triplet"<<endl;
	}
	
}
}
