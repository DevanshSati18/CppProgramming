#include <iostream>  // Preprocessor directive to include the input/output stream library

using namespace std;  // Using the standard namespace so we don't have to write 'std::' before every standard object

// Function prototype: Declares the function before its use in main()
void displayMessage();

// Main function: Entry point of any C++ program
int main() {
    // Declare variables
    int num1 = 10, num2 = 20;  // Two integer variables with initial values

    // Output a message to the console
    cout << "Hello, C++!" << endl;  // 'cout' is used to print text to the console, 'endl' adds a new line

    // Call the function defined below
    displayMessage();

    // Return statement to indicate the program executed successfully
    return 0;
}

// Function definition
// This function does not return anything ('void'), it simply prints a message to the console.
void displayMessage() {
    cout << "This is a simple function!" << endl;  // Prints a message to the console
}
