//David Ingraham
//Sepetember 8 2022
//sums the even and odd numbers up to a given range, finds the differnece of the sums and compares the difference to the range 
//
#include <iostream>
using namespace std;

int main () {


	int range = 0;
	int evensum = 0;
	int oddsum = 0;
	int dif;
	double ratio;

	cout << "Give a number and hit enter" << endl;
	cin >> range;
	cout << endl;

	for (int i = 0; i < range + 1; i++){

		if(i % 2 == 0){
			evensum += i;
		}

		else{
			oddsum += i;
		}
	}		

	if (oddsum > evensum){
	dif = oddsum - evensum; 
	}
	else {
	dif = evensum - oddsum;
	
	}
	ratio = dif / range;

	cout << "The sum of the even integers up to " << range << " is " << evensum << endl;
	cout << "The sum of the odd intergers up to " << range << " is " << oddsum << endl;
	cout << "The difference of sums is " << dif << endl;
	cout << "The ratio of the difference to range is " << ratio << endl;




}