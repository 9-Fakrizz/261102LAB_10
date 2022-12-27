#include<iostream>
#include<iomanip> 
using namespace std;

int main(){	

	double loan, per, money;
	double inters , total, pay, pbalance, nbalance;
	int year = 1;

	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> per;
	cout << "Enter amount you can pay per year: ";
	cin >> money;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	cout << fixed << setprecision(2);
	do
	{
		if(year == 1){
			nbalance = loan;
		}
		pbalance = nbalance;
		inters = nbalance *(per/100.0);
		total = pbalance + inters;
		
		pay = money;
		if(loan < money){
			pay = total;
		}
		
		nbalance = total - pay;
		if(nbalance < 0){
			nbalance = 0;
			pay = total;
		}
		
		cout<< setw(13) << left << year;
		cout << setw(13) << left << pbalance;
		cout << setw(13) << left << inters;
		cout << setw(13) << left << total;
		cout << setw(13) << left << pay;
		cout << setw(13) << left << nbalance;
		cout << "\n";	
		year++;
	} while (nbalance > 1 );

	
	return 0;
}