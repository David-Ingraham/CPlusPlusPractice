//David Ingraham 
//Oct 6th 2022
//Caluclulating the cost of a phone call


#include <iostream>			//libraries
#include <vector>
using namespace std;



int main (){


	cout.setf(ios::fixed);			//formating for cout to two significatn figures
	cout.setf(ios::showpoint);
	cout.precision(2);


	float total_cost, weekDayRate = 0.4, weekNightRate = 0.25, weekEndRate = 0.15; 	//variable initilization and assignment
	int callLength, callStartTime, timeStarted;
	string strDayOfWeek;
	vector <char> dayOfWeek;
	char char1ofDay;
	char char2ofDay;


	cout << "{{{{{{{{{{**************}}}}}}}}}}\n\n";			//input prompts to assigned variables
	cout << "Welcome to the program\n";

	cout << "How long was your call rounded to the nearest whole minute? ";
	cin >> callLength;
	cout << endl;
	
	cout << "What day of week did you make this call? Enter the first letter of the day : ";
	cin >> char1ofDay;
	cout << endl;

	cout << "Enter the second letter : ";
	cin >> char2ofDay;
	cout << endl;

	



	char1ofDay = toupper(char1ofDay);          		//hardcoding user input (dayOfWeek) as uppercase letters so condition checks later are simpler
	char2ofDay = toupper(char2ofDay); 			//there are attempts commented out below where i tried to turn the whole string to 
								//uppercase, but i think that is bc the dayof week is stored as two chars.									//eitherway i push the user input to the list after its capitalized then add each char in my vector to a 
								//string which i know will be in all caps
	dayOfWeek.push_back(char1ofDay);
	dayOfWeek.push_back(char2ofDay);

	for (char c: dayOfWeek){
		strDayOfWeek.append(1,c);
	
	}
	



	cout << "When did you start the call? Enter in military time as a 4 digit number with no semi-colon : ";
	cin >> timeStarted;
	cout << endl;

	// dayOfWeek = toupper(dayOfWeek)
	

	//transform(dayOfWeek.begin(), dayOfWeek.end(), dayOfWeek.begin(), ::toupper);

	

	if (800 < callStartTime < 1800 && ((strDayOfWeek == "MO" || strDayOfWeek == "TU") || (strDayOfWeek == "WE" || strDayOfWeek == "TH") || strDayOfWeek == "FR" )){
		
		total_cost = callLength * weekDayRate;
	
	}	 


	else if (strDayOfWeek == "SU" || strDayOfWeek == "SA"){							//condition checks 
		total_cost = callLength * weekEndRate;								//first checks if you made a daytime weekd day call,
														//and it you didn't, there only two more options for rates,
	}													//it was either a weekend call of or night call in the week. 
														

	else {
	
		total_cost = callLength * weekNightRate;
	}


	cout << "The cost of your phone call is " << total_cost << endl;
	cout << "{{{{{{{{{{**************}}}}}}}}}}\n";





}