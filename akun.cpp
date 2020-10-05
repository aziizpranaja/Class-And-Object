#include <iostream>
#include <string>

using namespace std;

class Account
{
	public:
		Account(int);
		void Kredit(int);
		void debit (int);
		int getAccountBalance();
	private:
		int accountBalance;
};
Account::Account(int Balance)
{
	if (Balance>=0)
	{
		accountBalance=Balance;
	}
	else
	{
		accountBalance=0;
		cout<<"saldi tidak valid"<<endl;
	}
}
void Account::Kredit(int Balance)
{
	accountBalance=accountBalance + Balance;
}
void Account::debit(int Balance)
{
	if(accountBalance>=Balance)
	{
		accountBalance=accountBalance-Balance;
	}
	else
	{
		cout<<"jumlah debit melebihi saldo"<<endl;
	}
}
int Account::getAccountBalance()
{
	return accountBalance;
}

int main()
{
	cout << " Account " <<endl <<endl;
	
	cout << endl;
	Account Account1(700000);
	Account Account2(800000);
	cout << "saldo pertama akun 1 : Rp. "<< Account1.getAccountBalance()<<endl;
	cout << "saldo pertama akun 2 : Rp. "<< Account2.getAccountBalance() <<endl;
	cout << endl;	
	
	cout << endl;
	Account1.Kredit(2000);
	Account2.Kredit(3000);
	cout << "kredit akun 1 : Rp. 2000" << endl;
	cout << "kredit akun 2 : Rp. 3000" << endl;
	
	cout <<endl << "setelah kredit :" << endl <<endl;
	cout << "saldo setelah kredit akun 1 : Rp. "<< Account1.getAccountBalance()<<endl;
	cout << "saldo setelah kredit akun 2 : Rp. "<< Account2.getAccountBalance()<<endl;
	cout << endl;
	
	cout << endl;
	Account1.debit(5000);
	Account2.debit(7000);
	cout << "debit akun 1 : Rp. 5000" << endl;
	cout << "debit akun 2 : Rp. 7000" << endl;
	
	cout <<endl << "setelah debit :" << endl <<endl;
	cout << "saldo terakhir akun 1 : Rp. "<< Account1.getAccountBalance() <<",-"<< endl;
	cout << "saldo terakhir akun2 : Rp. "<< Account2.getAccountBalance() <<",-"<< endl;
	
}
