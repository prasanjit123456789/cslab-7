/*Write a C++ program to find sum of digits of a given number using recursion.*/
//define library
#include<iostream>
using namespace std;
//define sumDigit function
int sumDigit(int n,int i,int j){
	//condition for stopping
	if(n==0){
		//print the sum of digits number
		cout<<j;
		return 1;
	}
	else{
		//getting the digits
		i=n%10;
		//making short the integer by taking one of its last integer in loop/recursion
		n=(n-i)/10;
		//adding the digits
		j=j+i;
		//recursion
		sumDigit(n,i,j);
		return n;
	}
}
//define main function 
int main(){
	//define variables
	int a;
	//ask the user till which number 
	cout<<"The number is  "<<endl;
	cin>>a;
	cout<<"The sum of digit of "<<a<<" is :-"<<endl;
	//call by the sumDigit function
	sumDigit(a,0,0);
	return 0;
}
