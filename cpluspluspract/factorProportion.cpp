// 10 - 16 - 2025

// how mnay numbers from 1-100 are muliptles of 5? 

// how mnay numbers from 1 - n are multiples of y? 

// ratio = countOfMultiples / n 

// how does the ration grow for larger values of n given a fixed y/

// what are the patterns between different y values? 




#include <iostream>



using std::cout;
using std::endl;
using std::cin;



int countMultis(int numToEval, int range);



int main () {

    float ratio;
    for (int i = 1; i < 1000; i++){

        cout << "\nThere are " << countMultis(5, i) << " multiples of 5 between and " << i << endl;
        ratio = i / 5;
        cout <<  i << " divied by 5 "  " equals " << ratio;

    }


}



int countMultis(int numToEval, int range){


    int numMultis;
 

    for (int i = 1; i < range; i++){
        if (i % numToEval == 0){
            numMultis ++;
        }
        
    }

    return numMultis;

}