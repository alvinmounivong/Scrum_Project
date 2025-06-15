#include <iostream>
using namespace std;

void addition(double a, double b) {
    cout << "Result: " << (a + b) << endl;
}

void subtraction(double a, double b) {
    cout << "Result: " << (a - b) << endl;
}

int main() {
    int choice;
    double x, y;

    do {
        cout << "====== SIMPLE CALCULATOR MENU ======" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Exit" << endl;
        cout << "Please select your choice (1-3): ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter the first number: ";
                cin >> x;
                cout << "Enter the second number: ";
                cin >> y;
                addition(x, y);
                break;
            case 2:
                cout << "Enter the first number: ";
                cin >> x;
                cout << "Enter the second number: ";
                cin >> y;
                subtraction(x, y);
                break;
            case 3:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please choose between 1 and 3." << endl;
        }

        cout << endl;
    } while(choice != 3);

    return 0;
}
