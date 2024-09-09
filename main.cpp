#include <iostream>
#include <limits> // For std::numeric_limits

using namespace std;

// Function prototypes
void displayMenu();
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);

int main() {
    int choice;
    double num1, num2;

    // Display the menu
    displayMenu();

    // Take user input for operation
    cout << "Enter choice (1/2/3/4): ";
    cin >> choice;

    // Check if choice is valid
    if (choice < 1 || choice > 4) {
        cout << "Invalid choice! Please select a valid operation." << endl;
        return 1;
    }

    // Take user input for numbers
    cout << "Enter first number: ";
    while (!(cin >> num1)) {
        cout << "Invalid input! Please enter a numeric value: ";
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
    }

    cout << "Enter second number: ";
    while (!(cin >> num2)) {
        cout << "Invalid input! Please enter a numeric value: ";
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
    }

    // Perform the selected operation
    switch (choice) {
        case 1:
            cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
            break;
        case 2:
            cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
            } else {
                cout << "Error! Division by zero." << endl;
            }
            break;
    }

    return 0;
}

// Function to display the menu
void displayMenu() {
    cout << "Simple Calculator" << endl;
    cout << "Select operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
}

// Function definitions
double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    return x / y;
}
