#include <iostream>
using namespace std;


int pow(int, int);


int main (){
	char progRun = 'y';
	int base, power;
	while (progRun == 'y'){

		cout << "Enter a base : ";
		cin >> base;
		cout << "\nEnter a power : ";
		cin >> power;
		cout << "\n";

		cout << base << " to the power " << power << " equals " << pow(base, power) << endl;



		cout << "Run again? y for yes, n for no : ";
		cin >> progRun;

	}

}




int pow(int base, int power){


	int res = 1;				//2 to power 2

	while (power > 0){			//res = 1, power = 2, base = 2

		res *= base;			//step 1: res = 2, power = 1;
		power --;
						// step 2: res = 4, power = 0
	}




	return res;

}
