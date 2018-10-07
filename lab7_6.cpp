/* Write a C++ program to find reverse of any number using recursion.*/
//define library
#include<iostream>
using namespace std;
//define rev function
int rev(int n,int i,int j){
	//condition for stopping
	if(n==0){
		//print the reverse number
		cout<<j;
		return 1;
	}
	else{
		//the first no of the reverse
		i=n%10;
		//for generating new no for without its last digit
		n=(n-i)/10;
		//arranging them from last digit to first digit
		j=j*10+i;
		//recursion
		rev(n,i,j);
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
	cout<<"The reverse of "<<a<<" is :-"<<endl;
	//call by the rev function
	rev(a,0,0);
	return 0;
}
