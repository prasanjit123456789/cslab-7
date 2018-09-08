//maximum
//include library
#include<iostream>
using namespace std;
//define max function
int max(int e,int f,int m){
	//if both are positive
	if(e>f){m=e;}
	else{m=f;}
	return m;
}
//define main function
int main(){
	//define the variables
	int a,b;
	//ask the user about two numbers
	cout<<"Give the two numbers";
	cin>>a>>b;
	
	//taking maximum from max function
	int t; 
	max(a,b,t);
	//print the maximum
	cout<<"The maximum is "<<max(a,b,t);
	return 0;
}
