#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> garage;
    int choice, carNo;

    do {
        cout << "\n--- Parking Garage Menu ---\n";
        cout << "1. Park a Car\n";
        cout << "2. Remove a Car\n";
        cout << "3. Display Parked Cars\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter car number: ";
                cin >> carNo;
                garage.push(carNo);
                cout << "Car parked successfully.\n";
                break;

            case 2:
                if (garage.empty()) {
                    cout << "Garage is empty.\n";
                } else {
                    cout << "Car " << garage.top()
                         << " left the garage.\n";
                    garage.pop();
                }
                break;

            case 3:
                if (garage.empty()) {
                    cout << "Garage is empty.\n";
                } else {
                    stack<int> temp = garage;
                    cout << "Cars in the garage (top to bottom): ";
                    while (!temp.empty()) {
                        cout << temp.top() << " ";
                        temp.pop();
                    }
                    cout << '\n';
                }
                break;

            case 4:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
