#include <iostream> 
#include<cmath> 

using namespace std;

// Function prototypes
void displayMenu();
void performOperation(int choice);
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
float power(float base, float exp);
float squareRoot(float a);
float logarithm(float a);
float sine(float a);
float cosine(float a);
float tangent(float a);

int main() {
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        performOperation(choice);
    } while (choice != 0);

    return 0;
}

void displayMenu() {
    cout << "Calculator Menu:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "5. Power" << endl;
    cout << "6. Square Root" << endl;
    cout << "7. Logarithm" << endl;
    cout << "8. Sine" << endl;
    cout << "9. Cosine" << endl;
    cout << "10. Tangent" << endl;
    cout << "0. Exit" << endl;
}

void performOperation(int choice) {
    float a, b;
    switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << add(a, b) << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << subtract(a, b) << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Result: " << multiply(a, b) << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            if (b != 0) {
                cout << "Result: " << divide(a, b) << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        case 5:
            cout << "Enter base and exponent: ";
            cin >> a >> b;
            cout << "Result: " << power(a, b) << endl;
            break;
        case 6:
            cout << "Enter a number: ";
            cin >> a;
            cout << "Result: " << squareRoot(a) << endl;
            break;
        case 7:
            cout << "Enter a number: ";
            cin >> a;
            cout << "Result: " << logarithm(a) << endl;
            break;
        case 8:
            cout << "Enter an angle in radians: ";
            cin >> a;
            cout << "Result: " << sine(a) << endl;
            break;
        case 9:
            cout << "Enter an angle in radians: ";
            cin >> a;
            cout << "Result: " << cosine(a) << endl;
            break;
        case 10:
            cout << "Enter an angle in radians: ";
            cin >> a;
            cout << "Result: " << tangent(a) << endl;
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

float power(float base, float exp) {
    return pow(base, exp);
}

float squareRoot(float a) {
    return sqrt(a);
}

float logarithm(float a) {
    return log(a);
}

float sine(float a) {
    return sin(a);
}

float cosine(float a) {
    return cos(a);
}

float tangent(float a) {
    return tan(a);
}