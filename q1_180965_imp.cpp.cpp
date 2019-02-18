#include "bankaccount.h"
#include<iostream>
#include <string>
using namespace std;

// It is a default concstructer which takes name and account number from the console 
bankaccount:: bankaccount(string name, int number)
{
	acc_holder_name=name;
	acc_number=number;
	balance=0;
	balance_limit=200000;
	default_size=10;
	transaction=new float [default_size];
	withdrew=0;
	deposit=0;
	no_of_transactions=0;
}

//This function prints the values of function
void bankaccount::print()
{
	cout<<"The name of the account holder is "<<acc_holder_name<<endl;
	cout<<"The account number is "<<acc_number<<endl;
	cout<<"The balance is "<<balance<<endl;
	cout<<"Total no of transactions are "<<no_of_transactions<<endl;
	if(no_of_transactions>0)
	{
	for(int i=0;i<default_size;i++)
	{
		cout<<"{"<<" "<< transaction[i]<<" , ";
	
	}
	cout<<"}"<<endl;
	}
	else 
		
		cout<<"The transactions are  {} "<<endl;
}

//this function is for withdraw 
void bankaccount:: withdrawn(float amount)
{
	if(amount <=balance)
	{
		if(no_of_transactions<default_size)
		{
		balance= balance -amount;
		transaction[no_of_transactions]=(-1*amount);
		no_of_transactions++;
		cout<<"Transaction succesful"<<endl;
		}
		else 
		{
			increasetrancapacity();
			balance= balance -amount;
			transaction[no_of_transactions]=(-1*amount);
			no_of_transactions++;
			cout<<"Transaction succesful"<<endl;
		}
	}
	else 
	{
			cout<<"transanction unsuccesful"<<endl;
			cout<<"insufficent balance"<<endl;
	}

}

// this function is to deposit amount in the account

void bankaccount:: depos(float amount_y)
{
	if((amount_y+balance) <= balance_limit)
	{
		if(no_of_transactions<default_size)
		{
			balance=balance + amount_y;
			transaction[no_of_transactions]=amount_y;
			no_of_transactions++;
			cout<<"Transaction succesful"<<endl;
		
		}
		else
		{
			//increasing capcaity of array
			increasetrancapacity();
			balance=balance + amount_y;
			transaction[no_of_transactions]=amount_y;
			no_of_transactions++;
			cout<<"Transaction succesful"<<endl;
		
		}
	}
	else cout<<"you have ecedded your limit"<<endl;






}

bankaccount::~bankaccount()
{
	delete[]transaction;
	transaction=nullptr;

}
// this fuction increase the capacity of array

void bankaccount:: increasetrancapacity()
{
	float *temp=new float[default_size*2];
	for(int i=0;i<default_size;i++)
	{
		temp[i]=transaction[i];
	
	}
	delete[]transaction;
	transaction=temp;
	default_size=default_size*2;

}
