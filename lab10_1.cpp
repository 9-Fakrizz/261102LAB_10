#include<iostream>
#include<iomanip> 
using namespace std;

int main(){	

	double loan, per, money;
	double inters =0, total=0, pay=0, pbalance=0, nbalance=0;
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
		
		cout<< setw(13) << left << year;
		pbalance = nbalance;
		cout << setw(13) << left << pbalance;
		inters = nbalance *(per/100.0);
		cout << setw(13) << left << inters;
		total = pbalance + inters;
		cout << setw(13) << left << total;
		pay = money;
		if(loan < money){
			pay = total;
		}
		cout << setw(13) << left << pay;
		nbalance = total - pay;
		if(nbalance < 0){
			nbalance = 0;
		}
		cout << setw(13) << left << nbalance;
		cout << "\n";	
		year++;
	} while (nbalance > pay );
	if(nbalance != 0){

		cout << setw(13) << left << year+1; 
		pbalance = nbalance;
		cout << setw(13) << left << pbalance ;
		inters = nbalance *(per/100.0);
		cout << setw(13) << left << inters;
		total = pbalance + inters;
		cout << setw(13) << left << total;
		pay = total;
		cout << setw(13) << left << pay;
		nbalance = total - pay;
		if(nbalance < 0){
			nbalance = 0;
		}
		cout << setw(13) << left << nbalance;
		cout << "\n";

	}
	
	return 0;
}