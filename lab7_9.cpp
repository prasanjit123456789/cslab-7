/*Write a C++ program to find factorial of any number using recursion.*/
//define library
#include<iostream>
using namespace std;
//define fac function
int fac(int b,int c){
	//condition for stoping
	if(c==1){return 1;}
	else{
		//declining for the recursion
		c=c-1;
		//recursion
		fac(b,c);
		//returnig the multiplication
		return c*fac(b,c);
	}	
}
//define main function
int main(){
	//define the variable
	int a;
	//ask the user about its value
	cout<<"Give the value."<<endl;
	cin>>a;
	cout<<"The factorial of "<<a<<" is"<<endl;
	//argue with fac function
	cout<<fac(a,a+1);
	return 0;
}
