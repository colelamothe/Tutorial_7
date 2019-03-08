// Tutorial # 7 program
// 100711084 8,March,2019
#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	// problem a.
	
	// Variable declaration
	int grade(0), sum(0), count(0), min(100), max(0);

	cout << "Please enter each grade and enter -1 to calculate the average of grades entered." << endl;

	while (grade != -1) {
		cout << "Please enter grade: " << endl;
		cin >> grade;
		if (grade == (-1)) {
			
			break;
		}
		else if (grade > 100 || grade < 0) {
			cout << "Invalid grade" << endl;
			continue;
			
		}
		else {
			sum += grade;
			count++;
		}
		if (grade > max) {
			max = grade;
		}
		if (grade < min) {
			min = grade;
		}
	
	}

	cout << "Average = " << (double)sum / count << endl;
	cout << "Min = " << min << " Max = " << max << endl;
	
	// Problem b.
	
	// Variable declaration
	int number;
	int check = 0;
	bool prime = false;

	cout << "Please enter the number you would like to find the prime numbers to: " << endl;
	cin >> number;
	
	for (int i = 1; i < number; i++) {
	
		for (int p = 2; p < i; p++) {
			if (i%p == 0) {
				prime = false;
				break;
			}
			else {
				prime = true;
			}
			
		}
		
		if (i % 2 == 0) {
			prime = false;
		}
		if (i == 2 || i == 3) {
			cout << i << endl;
		}
		else if (prime) {
			cout << i << endl;
		}
		prime = false;
	}
	
	// Problem c.
	
	// Variable declaration
	double money;
	double toonie(200), loonie(100), quarter(25), dime(10), nickel(5), penny(1);
	int tCoin(0), lCoin(0), qCoin(0), dCoin(0), nCoin(0), pCoin(0);

	cout << "Please enter the total amount to break into change: " << endl;
	cin >> money;
	money = money * 100; // removes the floating point;
	while (money > 0) {
		if (money - toonie >= 0) {
			tCoin++;
			money -= toonie;
		}
		else if (money - loonie >= 0) {
			lCoin++;
			money -= loonie;
		}
		else if (money - quarter >= 0) {
			qCoin++;
			money -= quarter;
		}
		else if (money - dime >= 0) {
			dCoin++;
			money -= dime;
		}
		else if (money - nickel >= 0) {
			nCoin++;
			money -= nickel;
		}
		else if (money - penny >= 0) {
			pCoin++;
			money -= penny;
		}

	}
	cout << setw(15) <<left <<"\nToonies: " << setw(5) << right << tCoin << setw(15) << left << "\nLoonies: " << setw(5) << right << lCoin 
		<< setw(15) << left << "\nQuarters: " << setw(5) << right << qCoin << setw(15) << left << "\nNickels: " << setw(5) << right << nCoin 
		<< setw(15) << left << "\nDimes: " << setw(5) << right << dCoin << setw(15) << left << "\nNickels: " << setw(5) << right << nCoin 
		<< setw(15) << left << "\nPennies: " << setw(5) << right << pCoin << endl;
	



	system("pause");
	return 0;
}