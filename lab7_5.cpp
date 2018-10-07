/*Write a C++ program to print the sum of even or odd numbers in given range using recursion.  (ODD)*/
//define library
#include<iostream>
using namespace std;
int sumOdd(int x,int y,int z,int u){

	//stoping condition
	if(z>=y){
		//return and print the sum
		cout<<"The sum of odd numbers is "<<u;
		return 1;
	}
	else{
	//adding and storing the odd numbers
	u=u+z;
	//continue the loop
	z=z+2;
	//recursion
	sumOdd(x,y,z,u);
	return u;
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
	cout<<"The sum of odd numbers between "<<q<<" and "<<p<<" is"<<endl;
	//defining for the next odd number after the smallest number given by the user
	//this formula says the next odd number
	int s=q+1+(q%2);
	//call by sumOdd function
	sumOdd(q,p,s,0);
	return 0;
}
