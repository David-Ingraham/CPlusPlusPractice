//David Ingraham
//Nov 10 2022
//num into demononations of quaters, pennies and dimes

#include <iostream>
using namespace std;

//funciton prototype

void getChange(int num);

int main (){

	char progRun = 'y';			//handling automatic rerun of program
	while (progRun == 'y'){

		int num;
		cout << "Enter an integer : ";		//input
		cin >> num;
		cout << endl;
		getChange(num);				//output
		cout << "\n";
		cout << "Would you like to run the program again? enter y for yes, anything else for no : ";
		cin >> progRun;
		cout << "\n";
	}

}

void getChange(int num){	//processing
	int ogNum = num;		//i alter the variable to give me the remaing change needed so i had to copy it for the output


				
	int q = num / 25;		//since casted as int, q will be the amount of qauters needed, 113/25 would yield 4
	num = num % 25;			//the original num is then altered with modulus to reflect the qauters already accounted for, and the processes is repeated for each denomontion 
	int d = num / 10;
	int p = num % 10;



	cout << ogNum << " is the equivalent of " << q << " quaters, " << d << " dimes, " << " and "	 << p << " pennies\n";

}
