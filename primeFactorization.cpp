#include <iostream>
using namespace std;




int main (){

	int copy, usrNum, numFactors;


	cout << "Enter an integer : ";
	cin >> usrNum;
	copy = usrNum;

	cout << "The prime factors of " << usrNum << " are ";
	for (int i = 2; i < usrNum; i++)

		if (usrNum % i == 0){
			usrNum /= i;
			cout << i << ", ";
			
		}
	cout << "\n";

	





}
