//sum in value
//include library
#include<iostream>
using namespace std;
//using void and taking reference
void addR(int a,int b,int &s){
	s=a+b;
}
//main driver function
int main(){
	//define variables
	int c,d,t;
	//input by user
	cout<<"Give numbers.";
	cin>>c>>d;
	//input to the add function
	addR(c,d,t);
	//print the sum
	cout<<"The sum is "<<t;

	return 0;
}
