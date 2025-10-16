#include <iostream>
#include <vector>

using std::cout;

using std::endl;

#include <unordered_map>


using std::cin;
//evry multipe of 3, print fizz, every mukpti of 5, print buzz, mult of three and 5 print fizzbuss. 



std::unordered_map<std::string, int> fizzbuzz(int range);
int main() {

    int range;

    cout << "Enter a range to calculate the fizzbuzz numbers for: ";

    cin >> range;

    cout << "\nYou entered : " << range << endl;





    std::unordered_map<std::string, int> summaryMap = fizzbuzz(range);



    


    cout << "Summary: \n";

    cout << "\nNum buzz (only mult of 5) between 1 and " << range << "  -->   " <<  summaryMap["buzzCount"] << endl;
    cout << "\nNum fizz (only mult of 3) between 1 and " << range << "  -->   " <<  summaryMap["fizzCount"] << endl;
    cout << "\nNum fizzbuzz between 1 and " << range << "  -->   " <<  summaryMap["fizzBuzzCount"] << endl;
    cout << "\nNum neither between 1 and " << range << "  -->   " <<  summaryMap["neitherCount"] << endl;
    



    return 0;

}



std::unordered_map<std::string, int> fizzbuzz(int range){



    int buzzCount;
    int fizzCount;
    int fizzBuzzCout;

    std::unordered_map<std::string, int> summaryMap;

    summaryMap["buzzCount"] =0;
    summaryMap["fizzCount"] =0;
    summaryMap["fizzBuzzCount"] =0;
    summaryMap["neitherCount"] =0;

    
    for (int i =1; i < range; i++){

       

        if ((i % 3 == 0) && (i % 5 !=0)){
            cout << "The number " << i << " is a multiple of 3 and not 5\n";
            cout << "fizz\n\n";
            summaryMap["fizzCount"]++;
        }


        if ((i % 5 == 0) && (i % 3 !=0)){
            cout << "The number " << i << " is a multiple of 5 and not 3\n";
            cout << "Buzz\n\n";
            summaryMap["buzzCount"]++;
        }


        if ((i % 3 == 0) && (i % 5 == 0)){
            cout << "The number " << i << " is a multiple of 3 and 5\n";
            cout << "fizzbuzz\n\n";
            summaryMap["fizzBuzzCount"]++;
        }

        
        if ((i % 3 != 0) && (i % 5 !=0)){
            cout << "The number " << i << " is not  multiple of 3 or 5\n\n";
            summaryMap["neitherCount"]++;
           
        }
    }



    return summaryMap;







  
}





