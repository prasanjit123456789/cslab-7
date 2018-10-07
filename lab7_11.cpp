/* Write a C++ program to find GCD (HCF) of two numbers using recursion*/
//define library
#include<iostream>
using namespace std;
//define hcf function
int hcf(int p,int q,int c,int k){
	
	//condition for stoping
	if(c==0){
		//print the HCF
		cout<<"The HCF is "<<k;
		return 1;
	}	
	else{
		//condition for which case it will be devided
		if(p%c==0 && q%c==0){
		//deviding and storing as we do in HCF
		p=p/c;
		q=q/c;
		//multiplying and storing as we do in HCF
		k=k*c;
		}	
		else{}	
		//descending the numbers for recursion 
		c=c-1;
		//recursion
		hcf(p,q,c,k);			
		return 0;		
	}
}
//define main function
int main(){
	//define variables
	int a,b,i;
	//ask the user for the values
	cout<<"Give the values for HCF "<<endl;
	cin>>a>>b;
	//condition for greater between the two numbers
	if(a>b){i=b;}
	else{i=a;}
	//call by hcf function for calculation of HCF
	hcf(a,b,i,1);
	return 0;
}
	

