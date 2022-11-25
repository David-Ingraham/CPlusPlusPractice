//David Ingraham
//Nov 25th 2022
//Sterlings approximation for factorial


#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using namespace std;




long double ster(long double usrInt);

long double customFact (long double usrInt);


int main (){
	long usrInt;
	char progRun = 'y';
	while (progRun == 'y'){
	cout << "Enter integer : ";
	cin >> usrInt;
	cout << endl;
	cout << "Sterling approximates " << usrInt << " factorial to be " << ster(usrInt) << endl;
	cout << usrInt << " factorial is " << customFact(usrInt) << endl;

	cout << "Margin of error is " << (customFact(usrInt) - ster(usrInt)) / customFact(usrInt) << endl;
	cout << "Would you like another run? y for yes anything else for no : ";	
	cin >> progRun;
	cout << endl;

	}

}


long double ster(long double usrInt) {

	return sqrt((2*usrInt) * M_PI) * pow((usrInt/M_E), usrInt);
}


long double customFact(long double usrInt){
	long double fact = 1.0;

	for (int i = 1; i <= usrInt; ++i){
		fact *= i;
		
	}
		
	return fact;
}




