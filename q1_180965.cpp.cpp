// bankaccount.cpp : Defines the entry point for the console application.
//
#include "bankaccount.h"
#include <iostream>
using namespace std;



int main()
{
	
	// problem 4
	bankaccount myaccount("Jhon doe",549002);
	myaccount.print();
	cout<<endl<<endl;

	//problem 5

	myaccount.withdrawn(2000);
	cout<<endl<<endl;
	
	//problem 6
	myaccount.depos(250000);
	cout<<endl<<endl;
	cout<<endl;
	myaccount.depos(50000);

	return 0;
}

