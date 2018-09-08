//sum in value
//include library
#include<iostream>
using namespace std;
//function for addition
int add(int a,int b){
	int s=a+b;
	//return the sum
	return s;
	}

//main driver function
int main(){
	//define variables
	int c,d;
	//input by user
	cout<<"Give numbers.";
	cin>>c>>d;
	//input to the add function
	add(c,d);
	//print the sum
	cout<<add(c,d);

	return 0;
}
