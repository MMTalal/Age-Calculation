
# Age Calculation

This simple C++ program calculates a user's age based on their birth year. The program prompts the user for their birth year, calculates their age using the current year (2024), and displays the result.

## Code Overview

```cpp
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
```

## Features
- Prompts the user to enter their birth year.
- Calculates the user's age based on the current year (2024).
- Displays the user's age in a simple message.

## How to Use
1. **Compile the Code**:
   Use a C++ compiler to compile the code. For example:
   ```bash
   g++ -o age_calculator age_calculator.cpp
   ```

2. **Run the Program**:
   Execute the compiled program:
   ```bash
   ./age_calculator
   ```

3. **Provide Input**:
   - When prompted, enter your birth year (e.g., 1990).

4. **View Output**:
   - The program will calculate and display your age based on the year 2024.

## Example Interaction
```
Input your birth year
1990
You have 34 years old
```

## Limitations
- The program assumes the user's birthday has already occurred in 2024. If their birthday is later in the year, the calculated age will be off by one year.
- Does not handle invalid inputs (e.g., non-numeric values or unrealistic birth years).

## Suggested Improvements
- Add input validation to ensure the entered year is realistic.
- Dynamically determine the current year instead of hardcoding it.
- Enhance grammar handling (e.g., singular/plural forms of "year").
