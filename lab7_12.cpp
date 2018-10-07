/*Write a C++ program to find LCM of two numbers using recursion.*/
//include library
#include<iostream>
using namespace std;

//define lcm function
int lcm(int p,int q,int r,int s,int t){
	
	//condition for stopping
	if(s==r+1){
		//print the lcm
		cout<<"The LCM is "<<t;	
		return 1;	
	}
	else{
		//in which case the how s will be devided
		//deviding and storing
		if(p%s==0 & q%s==0){p=p/s;q=q/s;t=t*s;}
		else if(p%s==0 && q%s!=0){p=p/s;t=t*s;}
		else if(p%s!=0 && q%s==0){q=q/s;t=t*s;}
		//condition sothat the s will increase for recursion
		else{s++;}
		//recursion
		lcm(p,q,r,s,t);
		return t;
	}
}	
//define main function
int main(){
	//define variables
	int a,b,i,k=1,j;
	//ask the user of which the LCM is needed
	cout<<"Give the numbers for the LCM."<<endl;
	cin>>a>>b;
	//condition for greater
	if(a>b){i=a;}
	else{i=b;}
	//call by lcm function
	lcm(a,b,i,2,1);
	return 0;
}
