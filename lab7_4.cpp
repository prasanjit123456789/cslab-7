/*Write a C++ program to find sum of all natural numbers from 1 to n using recursion.*/
//include library
#include<iostream>
using namespace std;
//define sum function
int sum(int i,int j,int n){
	//condition for stopping
	
	if(i==(j+1)){
		//returning and printing
		cout << "The sum is "<<n; 
		return 1;
	}
	//working conding
	else{
		//for adding and storing natural numbers
		n=n+i;
		//provides next no and continue the recursion
		i=i+1;
		//recursion
		sum(i,j,n);
		return n;
	}
}
	
//define main function
int main(){
	//define variables
	int a;
	//ask the user till which number he want to add
	cout<<"Till which number do you want top add."<<endl;
	cin>>a;
	//print the sum from 1 to a is
	cout<<"The sum from 1 to "<<a<<" is"<<endl;
	//argue with sum function
	sum(1,a,0);
	return 0;
}
