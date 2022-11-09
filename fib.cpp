//David Ingraham 
//Sept 14 2022
//C++ program to out put list of fibonocci number up to a given range 
//
//


#include <iostream>
#include <vector>
using namespace std;


int main () {

	//variable
	int range, t1 = 0, t2 = 1, nextTerm = 0;
	vector<int> fib;
	
	//prompts user to type number, cin looks open up standard input field and assigns that value to range variable
	cout << "	Enter a postive number: " << endl;
	cin >> range;
	

	//displays first two numbers in sequence and begins the final output
	cout << "Fibanocci sequence up to your given range: " << t1 << ", " << t2 << ", ";

	
	//begins the algorithm of finding next term by adding the two previous terms
	nextTerm = t1 + t2;
 
	fib.push_back(0); // manual adding of first two numbers bc the varibales have alredy been incremented
	fib.push_back(1); 
	while (nextTerm < range +1){
		
		
		fib.push_back(nextTerm); // adding each new term to vector

		cout << nextTerm << ", "; // diaplys sum of last two terms

		t1 = t2;        //reassigning variables to progress through sequnce
		t2 = nextTerm;
		nextTerm = t1 + t2;
		
	}
	cout << endl;
	cout << "There are " << fib.size() << " Fibanocci numbers less than " << range << endl;
	return 0;
	



}

