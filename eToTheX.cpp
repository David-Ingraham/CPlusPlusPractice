#define _USE_MATH_DEFINES
#include <cmath>


#include <iostream>

using namespace std;




int power (int, int);
int fact (int);



int main () {

	int usrNum;
	double sum = 0;
	char progRun = 'y';

	while (progRun == 'y'){



		cout << "Enter int : ";
		cin >> usrNum;

		cout << "e to the " << usrNum << " power = ";

		for (double k= 1; k < 1000; k++){
			cout << sum <<endl;
			sum += (power(usrNum, k) / fact(k));	
			
			cout << sum <<endl;

		}


		cout << sum << endl;


		


		cout << "\nRun again? y for yes, anything else for no : ";
		cin >> progRun;
	}

}




int power(int base, int power){

	int res = 1;

	while (power > 0){

		res *= base;
		power --;
	}
	return res;
}

int fact (int num){
	int res = 1;

	for (int i = num; i >=1; i--){

		res *= i;		

	}

	return res;


}









