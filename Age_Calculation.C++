#include <iostream>  // Include the iostream library for input and output
using namespace std;  // Use the standard namespace to avoid writing std:: before cout

int main() 
{
    // Prompt the user to input their birth year
    cout << "Input your birth year" << endl;
    
    int birthYear;  // Variable to store the user's birth year
    cin >> birthYear;  // Take the birth year as input from the user
    
    // Calculate and display the user's age based on the current year (2024)
    // The calculation assumes the user's birthday has already occurred in 2024
    cout << "You have " << 2024 - birthYear << " years old";
    
    return 0;  // Indicate that the program executed successfully
}
