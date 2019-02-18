#include <iostream>
#include<string>
using namespace std;

class bankaccount
{
private:
	string acc_holder_name;
	int acc_number;
	float balance;
	int balance_limit;
	int default_size;
	float *transaction;
	float withdrew;
	float deposit;
	int no_of_transactions;
	void increasetrancapacity();
public:

	bankaccount(string name, int number);
	void print ();
	void withdrawn(float amount);
	void depos(float amount_y);
	~bankaccount();
	
};


