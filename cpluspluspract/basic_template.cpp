// Basic C++ Program Structure Template

// Standard library includes
#include <iostream>      // Input/output operations
#include <string>        // String class
#include <vector>        // Dynamic arrays
#include <memory>        // Smart pointers

// Using declarations (optional, but common)
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Function declarations (prototypes)
void exampleFunction();
int addNumbers(int a, int b);

// Main function - program entry point
int main() {
    // Variable declarations
    int number = 42;
    string message = "Hello, C++";
    
    // Output to console
    cout << message << endl;
    cout << "Number: " << number << endl;
    
    // Function calls
    exampleFunction();
    int result = addNumbers(5, 7);
    cout << "Result: " << result << endl;
    
    // Return 0 indicates successful execution
    return 0;
}

// Function definitions
void exampleFunction() {
    cout << "This is an example function" << endl;
}

int addNumbers(int a, int b) {
    return a + b;
}

