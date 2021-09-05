/*1. escriba un programa que lea dos numeros y determine cual de ellos es el mayor.*/


#include<iostream>

using namespace std;

int main(){
	int n1,n2;
	
	cout<<"digite 2 numero: ";
	cin>>n1>>n2;
	if(n1==n2){
		cout<<"ambos numeros son iguales";
	}
	else if(n1>n2){
		cout<<"el mayor es: "<<n1;
	}
	else{
	cout<<"el mayor es: "<<n2;
	}
	
	
	
	return 0;
}
	

