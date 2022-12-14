#include <iostream>
#include <vector>
using namespace std;



bool isPalindrome(int x);

int main (){
	char progRun = 'y';
	while (progRun== 'y'){	
		vector <int> nums;
		vector <int> sums1;
		
		int usrInt, counter =0;

		cout << "Enter integer : ";
		cin >> usrInt;



		for(int i =0; i < usrInt; i++ ){

			if (isPalindrome(i)){
			nums.push_back(i);
			}
		}



		for (int x : nums){
		
			for (int y : nums){

				for (int k : nums){
					if (y+x+k == usrInt){
					cout << x << " + " << y <<  " + " << k << " equals " << usrInt << endl;
					cout << "\n****************************************************\n";
					counter ++;		
					
//find most abundant digit in the solution set using swicth statement on vscode
					}
				}
			}		

		}
		cout << "there are " << counter << " permutaions of " << usrInt << "'s triple palindrome sum";
		cout << endl;
		cout << "Would you like to try another integer? y for yes anything else for no : ";
		cin >> progRun;
		cout << endl;

	}

}


 bool isPalindrome(int x){
           if (x < 10) return true;
            string str = to_string(x);
             for (int i = 0; i < str.length() / 2; i++) {
                   if (str[i] != str[str.length() - i - 1]) {
                           return false;
                    }
           }
           return true;
 
   }
