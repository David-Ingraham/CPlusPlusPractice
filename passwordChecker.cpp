//David Ingraham
//Nov 4 2022
//Password check
#include <iostream>
#include <string>
#include <vector>

#include <cctype>

using namespace std;


string usrAttempt;


bool checkLen (string usrAttempt){

	if (usrAttempt.length() < 10){
		return false;
	}
	return true;

}


bool checkUpper(string usrAttempt){
	vector <char> charVec;
	for (char x : usrAttempt){
		if (tolower(x) != x){
			return true;	
		}
	}

	return false;
}	




bool checkInts(string usrAttempt){

	for (char x : usrAttempt){
		if (isdigit(x)){
			return true;
		}
	}
	return false;
}



bool checkSpecChar(string usrAttempt){
	
	
	for (char x : usrAttempt){
		if (isdigit(x) == false && isalpha(x) == false){
		/*if (x > 122){
			return true;
		}*/

		return true;
		}

	}
	return false;

}
int main (){

	char progrun = 'y';
	while (progrun == 'y'){
		string valid = "your password is valid\n";
		string invalid = "your password is invalid\n";
		cout << "enter a password : ";
		cin >> usrAttempt;
		if ((checkSpecChar(usrAttempt)) && (checkInts(usrAttempt)) && (checkUpper(usrAttempt)) && (checkLen(usrAttempt))){

			cout << valid;
		}
		else {
			cout << invalid;
		}
	cout << "would you like to run again? y for yes, anything else for no :";
	cin >> progrun;
	cout << "\n";
	}		

}
