/* Write a C++ program to print all natural numbers between 1 to n using recursion.*/
//define library
#include<iostream>
using namespace std;
//define count function
int count(int i,int c){
	//stopping condition
	if(c==i+1){return 1;}
	else{
	//printing the asscending order
	cout<<c<<endl;
	//increasing for continuing the recursion
	c=c+1;
	//recursion
	count(i,c); 
	return c;
	}

}
//define main function
int main(){
	//define variables
	int n;
	//the user has to give the number till which he need output
	cout<<"Give the input."<<endl;
	cin>>n;
	cout<<"The numbers from 1 to "<<n<<endl;
	//call by count function
	count(n,1); 
	return 0;
}
