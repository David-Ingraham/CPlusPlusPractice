#include <iostream>

using std::cout;
using std::cin;

using std::endl;



int main (){


    int strLen;

    cout << "\nHow many chars in the string? --> ";
    cin >> strLen;

    char* string = new char[strLen];

    for (int i = 0; i < strLen; i++){

        cout << "\nEnter string char number " << i + 1 << ": ";
        cin >> string[i];
    }



    char* revString = new char[strLen];

    for (int i = 0; i < strLen; i ++){

        revString[i] = string[strLen - 1 - i];
    }




    cout << "\nUser given string --> ";

    for (int i = 0; i < strLen; i++){

        cout << string[i];
    }

    cout << "\nReversed  string --> ";

    for (int i = 0; i < strLen; i++){

        cout << revString[i];
    }


    delete[] string;
    delete[] revString;


    cout << endl;
    return 0;
}