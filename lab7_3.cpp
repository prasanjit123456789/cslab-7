/*Write a C++ program to print all even or odd numbers in given range using recursion.  (EVEN)*/
//define library
#include<iostream>
using namespace std;
int even(int x,int y,int z){

	//stoping condition
	if(z>=y){return 1;}
	else{
	//printing the even number
	cout<<z<<endl;
	//incresing and storing by 2 for recursion
	z=z+2;
	//recursion
	even(x,y,z);
	return z;
	}
}
//define main function
int main(){
	//define variables
	int a,b,p,q;
	//ask the user to give the range
	cout<<"The range is in between. "<<endl;
	cin>>a>>b;
	//condition for greater
	if(a>b){p=a;q=b;}
	else{p=b;q=a;}
	//print the between
	cout<<"The even numbers between "<<q<<" and "<<p<<" is"<<endl;
	//defining for the next even number after the smallest number given by the user
	//this formula finds next even number 
	int s=q+2-(q%2);
	//call by even function
	even(q,p,s);
	return 0;
}
