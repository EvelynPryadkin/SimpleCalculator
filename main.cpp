#include <iostream>

using namespace std;

int main() {
        float num1, num2;
        char operation;


        cout << "Enter an equation (e.g., 5 + 3): ";


        while (!(cin >> num1 >> operation >> num2) || (operation != '+' && operation != '-' && operation != '*' && operation != '/')) {

                cerr << "Invalid input! Please enter a valid equation (e.g., 5 + 3): ";


                cin.clear();
                cin.ignore(10000, '\n');
        }

        cout << "------------------------" << endl;


        if (operation == '+') {
                cout << "The result of " << num1 << " " << operation << " " << num2 << " is: " << num1 + num2 << endl;
        }
        else if (operation == '-') {
                cout << "The result of " << num1 << " " << operation << " " << num2 << " is: " << num1 - num2 << endl;
        }
        else if (operation == '*') {
                cout << "The result of " << num1 << " " << operation << " " << num2 << " is: " << num1 * num2 << endl;
        }
        else if (operation == '/') {
                if (num2 == 0) {
                        cout << "Error: Cannot divide by zero!" << endl;
                } else {
                        cout << "The result of " << num1 << " " << operation << " " << num2 << " is: " << num1 / num2 << endl;
                }
        }

        return 0;
}


