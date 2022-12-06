//David Ingraham
//Dec 2nd 2022
//taking user input to populate a list then mapping each value to its frequency and siplaying the result

#include <iostream>
#include <map>

#include <array>

using namespace std;

int main (){


	int input, numsInList, list[50], temp;
	map <int, int> mp;
	bool foundFlag;
	
	cout << "Enter a series of numbers, stop with 0 : " << endl;

	//Stops taking input when 0 is entered

	for (int i =0; i < 50; i++){

		cin >> input;

		if (input != 0){

			numsInList++;
			list[i] = input;
		}

		else {

			break;
		}	
	}


	//Sorting list from greatest to lowest


	for (int i = 0; i < numsInList; i++){
		for (int k = i+1; k < numsInList; k++){
			if (list[i] < list[k]){
				temp = list[i];
				list[i] = list[k];
				list[k] = temp;
			}	
		}
		
	}

	for (int i = 0; i <numsInList; i++){		//creating a map/dictionary key for every item in list, its easier for me to work with the duplicates this way	
		mp.insert( {list[i], 1} );		//since i can send each list item to the dict and write over the value for repretting nums
	}

	for (int i = 0; i < numsInList; i++){

		if (list[i] == list[i+1]){		//since the list is sorted, all i need to do is check that consequetive items are the same then increment the value for
							//that list items relative value in the dictionary/map
			mp[ list[i] ]++;
		}
	}

	cout << "\n\n\n";


	cout << "NUMBER\tFrequency\n";
    	for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
    		cout << itr->first  << '\t' << itr->second << '\n';   //printing key value pairs to the console
    	}

	return 0;

}
