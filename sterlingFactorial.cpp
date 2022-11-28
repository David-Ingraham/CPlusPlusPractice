//David Ingraham
//Nov 25th 2022
//Sterlings approximation for factorial


#define _USE_MATH_DEFINES
#include <chrono>
#include <iostream>
#include <cmath>
using namespace std;

using namespace std::chrono;




long double ster(long double usrInt);

long double customFact (long double usrInt);


int main (){
	long usrInt;
	char progRun = 'y';
	while (progRun == 'y'){			//usr data input
	cout << "Enter integer : ";
	cin >> usrInt;
	cout << endl;


	auto sterStart = high_resolution_clock::now();		//taking time before and after function calls to compare speed of the algos

	cout << "Sterling approximates " << usrInt << " factorial to be " << ster(usrInt) << endl;
	auto sterStop = high_resolution_clock::now();


	auto custStart = high_resolution_clock::now();
	cout << usrInt << " factorial is " << customFact(usrInt) << endl;

	auto custStop = high_resolution_clock::now();


	auto sterDuration = duration_cast<microseconds>(sterStop -sterStart);

	auto custDuration = duration_cast<microseconds>(custStop -custStart);






	cout << "Margin of error is " << (customFact(usrInt) - ster(usrInt)) / customFact(usrInt) << endl;
	cout << "Sterlings approximation took " << sterDuration.count() << " mircoseconds" << endl;
	cout << "The itterative approach took "	<< custDuration.count() << " microseconds" << endl;

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




