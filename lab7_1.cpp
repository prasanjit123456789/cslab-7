/*Write a C++ program to find power of any number using recursion*/
//include library
#include<iostream>
using namespace std;
//the pow function
int pow(int n,int c,int d,int p){
	//the condition for stopping
	if(p>c){
		//print the result
		cout<<d;
		return 1;
	}
	else{
	//multiplying and storing
	d=d*n;
	//increasing for recursion to continue
	p=p+1;
	//recursion
	pow(n,c,d,p);
	return d;
	}
}
//define main function
int main(){
	//declair variable
	int a,b;
	//ask the user about the value of the number to get the no. to the power(given by user)  as output
	cout<<"Give the number and its power respectively."<<endl;
	cin>>a>>b;
	cout<<"The result is :-"<<endl;
	//callby a sqr function
	pow(a,b,1,1);	
	return 0;
}
