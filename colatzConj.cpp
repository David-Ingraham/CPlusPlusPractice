#include <iostream>

using namespace std;



int main (){

	char progRun = 'y';
	int startNum, i = 0, counter = 0, og;
	while (progRun == 'y'){

		cout << "Enter a number to see if it converges to 1 via Colatz formula : ";
		cin >> startNum;
		og = startNum;
		while (i < 1000){

			if (startNum % 2 == 0) startNum/=2;
			else {startNum = 3*startNum + 1;}
			i --;
			cout << startNum << endl;
			counter ++;

			if (startNum == 1) break;
		}

		cout << "It took " << counter << " iterations for " << og << " to reach 1, who knew. \n";
		counter = 0;	

		

		cout << "Run again? y for yes, anything else for no ; ";
		cin >> progRun;

	}

}
